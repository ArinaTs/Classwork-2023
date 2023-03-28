#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include "Rational.h"


Rational::Rational() : numerator(1), denominator(2) {}
Rational::Rational(int _numerator, int _denominator) : numerator(_numerator), denominator(_denominator) {}
Rational::Rational(const Rational& drob) : numerator(drob.numerator), denominator(drob.denominator) {}

Rational Rational::Add(const Rational& drob2) {
	Rational res;
	res.denominator = this->denominator * drob2.denominator;
	res.numerator = this->numerator * drob2.denominator + drob2.numerator * this->denominator;
	return res;
}

Rational Rational::Sub(const Rational& drob2) {
	Rational res;
	res.denominator = this->denominator * drob2.denominator;
	res.numerator = this->numerator * drob2.denominator - drob2.numerator * this->denominator;
	return res;
}

Rational Rational::Mult(const Rational& drob2) {
	Rational res;
	res.denominator = this->denominator * drob2.denominator;
	res.numerator = this->numerator * drob2.numerator;
	return res;
}

Rational Rational::Div(const Rational& drob2) {
	Rational res;
	res.denominator = this->denominator * drob2.numerator;
	res.numerator = this->numerator * drob2.denominator;
	return res;
}

Rational Rational::Easy() {
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

void Rational::print() {
	std::cout << this->numerator << "/" << this->denominator;
}

RationalWithIntPart::RationalWithIntPart() : integer(1) {}
RationalWithIntPart::RationalWithIntPart(int _numerator, int _denominator, int _integer) : integer(_integer), Rational(_numerator, _denominator) {}
RationalWithIntPart::RationalWithIntPart(RationalWithIntPart& drob) {
	integer = drob.integer;
	numerator = drob.numerator;
	denominator = drob.denominator;
}

RationalWithIntPart RationalWithIntPart::operator+(const RationalWithIntPart& drob2) {
	RationalWithIntPart res(*this);
	res.numerator = this->numerator * drob2.denominator + drob2.numerator * this->denominator;
	res.denominator = this->denominator * drob2.denominator;;
	res.integer = this->integer + drob2.integer;
	return res;
}

RationalWithIntPart RationalWithIntPart::operator-(const RationalWithIntPart& drob2) {
	Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
	Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
	Rational resR = convertNum1.Sub(convertNum2);
	RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
		resR.getDenominator(),
		resR.getNumerator() / resR.getDenominator());
	return res;
}

RationalWithIntPart RationalWithIntPart::operator*(const RationalWithIntPart& drob2) {
	Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
	Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
	Rational resR = convertNum1.Mult(convertNum2);
	RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
		resR.getDenominator(),
		resR.getNumerator() / resR.getDenominator());
	return res;
}

RationalWithIntPart RationalWithIntPart::operator/(const RationalWithIntPart& drob2) {
	Rational convertNum1(this->numerator + this->denominator * this->integer, this->denominator);
	Rational convertNum2(drob2.numerator + drob2.denominator * drob2.integer, drob2.denominator);
	Rational resR = convertNum1.Div(convertNum2);
	RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
		resR.getDenominator(),
		resR.getNumerator() / resR.getDenominator());
	return res;
}

RationalWithIntPart RationalWithIntPart::Add(const RationalWithIntPart& drob2) {
	RationalWithIntPart res;
	res.integer = this->integer + drob2.integer;
	res.denominator = this->denominator * drob2.denominator;
	res.numerator = this->numerator * drob2.denominator + drob2.numerator * this->denominator;
	return res;
}

RationalWithIntPart RationalWithIntPart::Sub(const RationalWithIntPart& drob2) {
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

RationalWithIntPart RationalWithIntPart::Mult(const RationalWithIntPart& drob2) {
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

RationalWithIntPart RationalWithIntPart::Div(const RationalWithIntPart& drob2) {
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

RationalWithIntPart RationalWithIntPart::Easy() {
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

RationalWithIntPart RationalWithIntPart::Integer() {
	//выделяем целую часть
	RationalWithIntPart res(this->numerator % this->denominator,
		this->denominator,
		this->integer + this->numerator / this->denominator);
	return res;
}


void RationalWithIntPart::print() {
	std::cout << this->integer << " целых " << this->numerator << "/" << this->denominator;
}
