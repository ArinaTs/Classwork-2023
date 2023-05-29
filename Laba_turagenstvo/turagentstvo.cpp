#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

#include <windows.h>
#include <conio.h>

#include <map>

//система классов, объявить поля и методы
//Турагентство. Путевка турагентства. ФИО, телефон, домашний адрес туриста, адрес и стоимость маршрута поездки, дата отправления, стоимость путевки + название, адрес и e-mail турагентства
//ФИО, телефон, домашний адрес
class FIO {
	std::string name;
	std::string surname;
	std::string middle_name;
public:
	FIO() : name("x"), surname("y"), middle_name("z") {}
	FIO(std::string _name, std::string _surname, std::string _middle_name) : name(_name), surname(_surname), middle_name(_middle_name) {}
	FIO(FIO& fio) : name(fio.name), surname(fio.surname), middle_name(fio.middle_name) {}
	~FIO() {}
	bool operator==(const FIO&p) const {
		return (this->name == p.name && this->surname == p.surname && this->middle_name == p.middle_name);
	}
	bool operator<(const FIO& p) const {
		if (this->surname < p.surname)
		  return true;

	};
	bool operator>(const FIO& p) const {
		return (this->surname > p.surname);
	};
	friend std::ostream& operator<<(std::ostream& out, const FIO&);
	friend std::istream& operator>>(std::istream&in, FIO&);
};
std::ostream& operator<<(std::ostream& out, const FIO& p) {
	out << p.name << " " << p.surname << " " << p.middle_name;
};
std::istream& operator>>(std::istream& in, FIO& p) {
	in >> p.name >> p.surname >> p.middle_name;
};

class Phone {
	int number[11]; // 8 9 9 9 9 9 9 9 9 9 9
public:
	Phone() {
		for (int i = 0; i < 11; i++) {
			number[i] = 0;
		}
	}
	Phone(long int _number) {
		number[0] = _number / 10000000000 % 10;
		number[1] = _number / 1000000000 % 10;
		number[2] = _number / 100000000 % 10;
		number[3] = _number / 10000000 % 10;
		number[4] = _number / 1000000 % 10;
		number[5] = _number / 100000 % 10;
		number[6] = _number / 10000 % 10;
		number[7] = _number / 1000 % 10;
		number[8] = _number / 100 % 10;
		number[9] = _number / 10 % 10;
		number[10] = _number % 10;
	}
	~Phone() { 
		delete[] number;
	}

	friend std::ostream& operator<<(std::ostream& out, const Phone& p); // +7(999)999-99-99
	friend std::istream& operator>>(std::istream& in, Phone& p);
};
std::ostream& operator<<(std::ostream& out, const Phone& p) {
	out << "+" << p.number[0] << "(";
	for (int i = 1; i < 4; i++) {
		out << p.number[i];
	}
	out << ")";
	for (int i = 4; i < 7; i++) {
		out << p.number[i];
	}
	out << "-" << p.number[7] << p.number[8] << "-" << p.number[9] << p.number[10];
}
std::istream& operator>>(std::istream& in, Phone& p) {
	for (int i = 0; i < 11; i++) {
		in >> p.number[i];
	}
}

class Contact {
	Phone phone;
	std::string country;
	std::string city;
	std::string street;
	int num_of_house;
public:
	Contact();
	Contact(long int _phone, int _size, std::string _country, std::string _city, std::string _street, int _num_of_house) : phone(_phone) {}
	Contact(Contact& cont);
	~Contact() {}

	bool checkByCity(std::string _city) const {
		return (this->city == _city);
	};
	bool operator<(const Contact&p) const {
		return (this->city < p.city);
	};
	bool operator>(const Contact& p) const {
		return (this->city > p.city);
	};
	friend std::ostream& operator<<(std::ostream& out, const Contact&p);
	friend std::istream& operator>>(std::istream& in, Contact&p);
	friend class Tourist;
};
std::ostream& operator<<(std::ostream& out, const Contact& p) {
	out << "(" << p.phone << ", " << p.country << ", " << p.city << ", " << p.street << ", " << p.num_of_house << ")";
};
std::istream& operator>>(std::istream& in, Contact& p) {
	in >> p.phone >> p.country >> p.city >> p.street >> p.num_of_house;
};
Contact::Contact() {
	for (int i = 0; i < 11; i++) {
		phone[i] = 0;
	}
	country = "Russia";
	city = "Moskow";
	street = "Lenina";
	num_of_house = 1;
}
Contact::Contact(long int _phone, int _size, std::string _country, std::string _city, std::string _street, int _num_of_house) {
	country = _country;
	city = _city;
	street = _street;
	num_of_house = _num_of_house;
}
Contact::Contact(Contact &cont) {
	for (int i = 0; i < 11; i++) {
		phone[i] = cont.phone[i];
	}
	country = cont.country;
	city = cont.city;
	street = cont.street;
	num_of_house = cont.num_of_house;
}

class Tourist  {
	FIO nam_sur_mid;
	Contact adress;
	Travel** hisTravels;
	int size;
	void addNewTravel(Travel* it) {
		size = size + 1;
		hisTravels[size - 1] = it;
	}
public:
	bool checkByCity(Contact _adress) const {
		return (this->adress.city == _adress.city);
	};
	bool operator<(const Contact& p) const {
		return (this->adress.city < p.city);
	};
	bool operator>(const Contact& p) const {
		return (this->adress.city > p.city);
	};
};

class ClientBase {
	Tourist* all;
	int count;
	Tourist& findInCity(Contact _adress) {
		for (int i = 0; i < count; i++) {
			all[i].checkByCity(_adress);
		}
	}
};

std::map<int, int> months = { //map.find(this->month) для вычиления даты окончания поездки
	{ 1, 31 },
	{ 2, 28 },
	{ 3, 31 }, 
	{ 4, 30 },
	{ 5, 31 },
	{ 6, 30 },
	{ 7, 31 },
	{ 8, 31 },
	{ 9, 30 },
	{ 10, 31 },
	{ 11, 30 },
	{ 12, 31 },
};

//адрес и протяженность маршрута поездки, дата отправления, стоимость путевки
class Date {
protected:
	int day;
	int month;
	int year;
public:
    Date(): day(1), month(1), year(2024) {}
	Date(int _day, int _month, int _year): day(_day), month(_month), year(_year) {}
	Date(Date& out): day(out.day), month(out.month), year(out.year) {}
	bool operator==(const Date&d) const {
		return (this->day == d.day && this->month == d.month && this->year == d.year);
	};
	bool operator<(const Date&d) const {
		return (this->day < d.day && this->month < d.month && this->year < d.year);
	};
	bool operator>(const Date& d) const {
		return (this->day > d.day && this->month > d.month && this->year > d.year);
	};
	friend std::ostream& operator<<(std::ostream& out, const Date&d);
	friend std::istream& operator>>(std::istream& in, Date&d);
};
std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << "(" << d.day << ", " << d.month << ", " << d.year << ")";
};
std::istream& operator>>(std::istream& in, Date& d) {
	in >> d.day >> d.month >> d.year;
};

class Travel {
	std::string country_to;
	int dist;
	int cost;
	Date date;
	int prodolzh;
	int status;
public:
	Travel(): country_to("Japan"), dist(7000), cost(100000), date(1, 1, 2020) {}
	Travel(Date _date, std::string _country_to, int _dist, int _cost) : date(_date), country_to(_country_to), dist(_dist), cost(_cost) {}
	Travel(Travel& trip) : date(trip.date), country_to(trip.country_to), dist(trip.dist), cost(trip.cost) {}
	bool operator==(const Travel&t) const {
		return (this->cost == t.cost);
	}
	bool operator<(const Travel&t) const {
		return (this->cost < t.cost);
	};
	bool operator>(const Travel&t) const {
		return (this->cost < t.cost);
	};
	friend std::ostream& operator<<(std::ostream& out, const Travel& t);
	friend std::istream& operator>>(std::istream& in, Travel& t);
};


class Travels {
	Travel** all;
	int size;
	int count;
	void add(int _day, std::string _month, int _year, std::string _country_to, int _dist, int _cost) {
		Travel new_travel = new Travel(_day, _month, _year, _country_to, _dist, _cost);
		all[count] = &new_travel;
		count++;
	} // find(1, 1, 1111, NN)
	Travel* find(int start, int _day, std::string _month, int _year, std::string _country_to) {
		for (int i = 0; i < count; i++) {
			if (Travel.date.day == _day && Travel.date.month == _month && Travel.date.year == _year) {
				std::cout << _day << _month << _year << _country_to << _cost;
			}
		}
	
	}
};


std::ostream& operator<<(std::ostream& out, const Travel& t) {
	out << "(" << t.country_to << ", " << t.dist << ", " << t.cost << ")";
};
std::istream& operator>>(std::istream& in, Travel& t) {
	in >> t.country_to >> t.dist >> t.cost;
};