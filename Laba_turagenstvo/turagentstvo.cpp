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
	~FIO(){}
};
class Contact {
	int phone[11];
	std::string country;
	std::string city;
	std::string street;
	int num_of_house;
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
Contact::Contact(int _phone[11], std::string _country, std::string _city, std::string _street, int _num_of_house) {
	for (int i = 0; i < 11; i++) {
		phone[i] = _phone[i];
	}
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
class Tourist {
	FIO nam_sur_mid;
	Contact adress;
};
//адрес и протяженность маршрута поездки, дата отправления, стоимость путевки
class Date {
	int day;
	std::string month;
	int year;
	public:
    Date(): day(1), month("January"), year(2024) {}
	Date(int _day, std::string _month, int _year): day(_day), month(_month), year(_year) {}
	Date(Date& out): day(out.day), month(out.month), year(out.year) {}
};
class Travel {
	std::string country_to;
	int dist;
	int cost;
	Date date_out;
	Travel() : country_to("Japan"), dist(7000), cost(100000) {}
	Travel(std::string _country_to, int _dist, int _cost, Date _date_out) : country_to(_country_to), dist(_dist), cost(_cost), date_out(_date_out) {}
	Travel(Travel& trip) : country_to(trip.country_to), dist(trip.dist), cost(trip.cost), date_out(trip.date_out) {}
};