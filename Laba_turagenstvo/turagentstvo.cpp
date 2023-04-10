#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

#include <windows.h>
#include <conio.h>

//система классов, объявить поля и методы
//Турагентство. Путевка турагентства. ФИО, телефон, домашний адрес туриста, адрес и стоимость маршрута поездки, дата отправления, стоимость путевки + название, адрес и e-mail турагентства
//ФИО, телефон, домашний адрес
class FIO {
	const std::string name;
	const std::string surname;
	const std::string middle_name;
public:
	FIO() : name("x"), surname("y"), middle_name("z") {}
	FIO(std::string _name, std::string _surname, std::string _middle_name) : name(_name), surname(_surname), middle_name(_middle_name) {}
	FIO(FIO& fio) : name(fio.name), surname(fio.surname), middle_name(fio.middle_name) {}
	~FIO() {}
	bool operator==(const FIO&p) const {
		return (this->name == p.name && this->surname == p.surname && this->middle_name == p.middle_name);
	}
	bool operator<(const FIO& p) const {
		return (this->surname < p.surname);
	};
	bool operator>(const FIO& p) const {
		return (this->surname < p.surname);
	};
	friend std::ostream& operator<<(std::ostream& out, const FIO&);
	friend std::istream& operator>>(std::istream&in, const FIO&);
};
std::ostream& operator<<(std::ostream& out, const FIO& p) {
	out << "(" << p.name << ", " << p.surname << ", " << p.middle_name << ")";
};
std::istream& operator>>(std::istream& in, const FIO& p) {
	in >> "(" >> p.name >> ", " >> p.surname >> ", " >> p.middle_name >> ")";
};


class Contact {
	int* phone;
	int size;
	std::string country;
	std::string city;
	std::string street;
	int num_of_house;
public:
	Contact();
	Contact(int* _phone,int _size, std::string _country, std::string _city, std::string _street, int _num_of_house);
	Contact(Contact& cont);
	~Contact() {
		delete[] phone;
	}
	bool operator==(const Contact&p) const {
		return (this->city == p.city);
	};
	bool operator<(const Contact&p) const {
		return (this->city < p.city);
	};
	bool operator>(const Contact& p) const {
		return (this->city > p.city);
	};
	friend std::ostream& operator<<(std::ostream& out, const Contact&p);
	friend std::istream& operator>>(std::istream& in, const Contact&p);
};
std::ostream& operator<<(std::ostream& out, const Contact& p) {
	out << "(" << p.phone << ", " << p.country << ", " << p.city << ", " << p.street << ", " << p.num_of_house << ")";
};
std::istream& operator>>(std::istream& in, const Contact& p) {
	in >> "(" >> p.phone >> ", " >> p.country >> ", " >> p.city >> ", " >> p.street >> ", " >> p.num_of_house >> ")";
};
Contact::Contact() {
	size = 11;
	phone = new int [size];
	for (int i = 0; i < size; i++) {
		phone[i] = 0;
	}
	country = "Russia";
	city = "Moskow";
	street = "Lenina";
	num_of_house = 1;
}
Contact::Contact(int* _phone,int _size, std::string _country, std::string _city, std::string _street, int _num_of_house) {
	size = _size;
	phone = new int [size];
	for (int i = 0; i < size; i++) {
		phone[i] = _phone[i];
	}
	country = _country;
	city = _city;
	street = _street;
	num_of_house = _num_of_house;
}
Contact::Contact(Contact &cont) {
	size = cont.size;
	phone = new int [size];
	for (int i = 0; i < size; i++) {
		phone[i] = cont.phone[i];
	}
	country = cont.country;
	city = cont.city;
	street = cont.street;
	num_of_house = cont.num_of_house;
}

class Tourist : FIO {
	FIO nam_sur_mid;
	Contact adress;
};

//адрес и протяженность маршрута поездки, дата отправления, стоимость путевки
class Date {
protected:
	int day;
	std::string month;
	int year;
public:
    Date(): day(1), month("January"), year(2024) {}
	Date(int _day, std::string _month, int _year): day(_day), month(_month), year(_year) {}
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
	friend std::istream& operator>>(std::istream& in, const Date&d);
};
std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << "(" << d.day << ", " << d.month << ", " << d.year << ")";
};
std::istream& operator>>(std::istream& in, const Date& d) {
	in >> "(" >> d.day >> ", " >> d.month >> ", " >> d.year >> ")";
};

class Travel : public Date {
	std::string country_to;
	int dist;
	int cost;
public:
	Travel(): country_to("Japan"), dist(7000), cost(100000) {}
	Travel(int _day, std::string _month, int _year, std::string _country_to, int _dist, int _cost) : Date(_day, _month, _year), country_to(_country_to), dist(_dist), cost(_cost) {}
	Travel(Travel& trip) : day(trip.day), month(trip.month), year(trip.year), country_to(trip.country_to), dist(trip.dist), cost(trip.cost) {}
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
	friend std::istream& operator>>(std::istream& in, const Travel& t);
};
std::ostream& operator<<(std::ostream& out, const Travel& t) {
	out << "(" << t.country_to << ", " << t.dist << ", " << t.cost << ")";
};
std::istream& operator>>(std::istream& in, const Travel& t) {
	in >> "(" >> t.country_to >> ", " >> t.dist >> ", " >> t.cost >> ")";
};