#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

class Rational {
protected:
	int numerator;
	int denominator;
public:
	Rational() : numerator(1), denominator(2) {}
	Rational(int _numerator, int _denominator) : numerator(_numerator), denominator(_denominator) {}
	Rational(const Rational& drob) : numerator(drob.numerator), denominator(drob.denominator) {}

	int getNumerator() {
		return numerator;
	}

	int getDenominator() {
		return denominator;
	}

	Rational Add(const Rational& drob2) {
		Rational res;
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.denominator + drob2.numerator * this->denominator;
		return res;
	}

	Rational Sub(const Rational& drob2) {
		Rational res;
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.denominator - drob2.numerator * this->denominator;
		return res;
	}

	Rational Mult(const Rational& drob2) {
		Rational res;
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.numerator;
		return res;
	}

	Rational Div(const Rational& drob2) {
		Rational res;
		res.denominator = this->denominator * drob2.numerator;
		res.numerator = this->numerator * drob2.denominator;
		return res;
	}

	Rational Easy() {
		Rational res;
		int min = numerator;
		if (denominator <= numerator) min = denominator;
		res.denominator = this->denominator;
		res.numerator = this->numerator;
		for (int i = 2; i <= min; i++) {
			if (this->denominator % i == 0 && this->numerator % i == 0) {
				res.denominator = this->denominator / i;
				res.numerator = this->numerator / i;
			}
		}
		return res;
	}

	void print() {
		std::cout << this->numerator << "/" << this->denominator;
	}


};


class RationalWithIntPart : Rational {
	int integer;
public:
	RationalWithIntPart() : integer(1) {}
	RationalWithIntPart(int _numerator, int _denominator, int _integer) : integer(_integer), Rational(_numerator, _denominator) {}
	RationalWithIntPart(RationalWithIntPart& drob) {
		integer = drob.integer;
		numerator = drob.numerator;
		denominator = drob.denominator;
	}

	RationalWithIntPart Add(const RationalWithIntPart& drob2) {
		RationalWithIntPart res;
		res.integer = this->integer + drob2.integer;
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.denominator + drob2.numerator * this->denominator;
		return res;
	}

	RationalWithIntPart Sub(const RationalWithIntPart& drob2) {
		//переводим в неправильные дроби
		Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
		Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
		//получаем ответ в виде неправильной дроби
		Rational resR = convertNum1.Sub(convertNum2);
		//выделяем целую часть
		RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
			resR.getDenominator(),
			resR.getNumerator() / resR.getDenominator());
		return res;
	}

	RationalWithIntPart Mult(const RationalWithIntPart& drob2) {
		//переводим в неправильные дроби
		Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
		Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
		//получаем ответ в виде неправильной дроби
		Rational resR = convertNum1.Mult(convertNum2);
		//выделяем целую часть
		RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
			resR.getDenominator(),
			resR.getNumerator() / resR.getDenominator());
		return res;
	}

	RationalWithIntPart Div(const RationalWithIntPart& drob2) {
		//переводим в неправильные дроби
		Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
		Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
		//получаем ответ в виде неправильной дроби
		Rational resR = convertNum1.Div(convertNum2);
		//выделяем целую часть
		RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
			resR.getDenominator(),
			resR.getNumerator() / resR.getDenominator());
		return res;
	}

	RationalWithIntPart Easy() {
		RationalWithIntPart res(this->numerator, this->denominator, this->integer);
		int min = this->numerator;
		if (this->denominator <= this->numerator) min = this->denominator;
		res.denominator = this->denominator;
		res.numerator = this->numerator;
		for (int i = 2; i <= min; i++) {
			if (this->denominator % i == 0 && this->numerator % i == 0) {
				res.denominator = this->denominator / i;
				res.numerator = this->numerator / i;
			}
		}
		return res;
	}

	RationalWithIntPart Integer() {
		//выделяем целую часть
		RationalWithIntPart res(this->numerator % this->denominator,
			this->denominator,
			this->integer + this->numerator / this->denominator);
		return res;
	}


	void print() {
		std::cout << this->integer << " целых " << this->numerator << "/" << this->denominator;
	}
};


int main() {
	setlocale(LC_ALL, "rus");
	MENU();
}

void MENU() {
	system("cls");
	int n;
	std::cout << "Выберите пункт:\n1. Действия с дробями\n2. Действия со смешанными числами\nВаш выбор: ";
	std::cin >> n;
	if (n == 1) {
		return DROBI;
	}
	else if (n == 2) {
		return SMESH;
	}
}

void DROBI() {
	system("cls");
	int n;
	std::cout << "Выберите пункт:\n1. Упростить дробь\n2. Другое\nВаш выбор: ";
	std::cin >> n;
	if (n == 1) {
		Rational d1(a, b);
		std::cout << "Введите дробь в формате <числитель знаменатель>";
		std::cin >> a >> " " >> b;
	}
}

void SMESH() {
	system("cls");
	int n;
	std::cout << "Выберите пункт:\n1. Упростить\n2. Выделить целую часть\n3. Другое\nВаш выбор: ";
	std::cin >> n;
	if (n == 1) {
		return DROBI
	}
}

/*
Rational d1(2, 8), d2(1, 7), d3;
d3 = d1.Easy();
d3.print();
RationalWithIntPart dr1(7, 6, 1), dr2(2, 5, 4), dr3;
dr3 = dr1.Integer();
dr3.print();
}
*/