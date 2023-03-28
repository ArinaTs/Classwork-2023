#pragma once
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
	Rational();
	Rational(int _numerator, int _denominator);
	Rational(const Rational& drob);

	int getNumerator() {
		return numerator;
	}

	int getDenominator() {
		return denominator;
	}

	Rational Add(const Rational& drob2);
	Rational Sub(const Rational& drob2);
	Rational Mult(const Rational& drob2);
	Rational Div(const Rational& drob2);
	Rational Easy();
	void print();

};


class RationalWithIntPart : public Rational {
	int integer;
public:
	RationalWithIntPart();
	RationalWithIntPart(int _numerator, int _denominator, int _integer);
	RationalWithIntPart(RationalWithIntPart& drob);

	int getInteger() {
		return integer;
	}

	RationalWithIntPart operator+(const RationalWithIntPart& drob2);
	RationalWithIntPart operator-(const RationalWithIntPart& drob2);
	RationalWithIntPart operator*(const RationalWithIntPart& drob2);
	RationalWithIntPart operator/(const RationalWithIntPart& drob2);

	RationalWithIntPart Add(const RationalWithIntPart& drob2);
	RationalWithIntPart Sub(const RationalWithIntPart& drob2);
	RationalWithIntPart Mult(const RationalWithIntPart& drob2);
	RationalWithIntPart Div(const RationalWithIntPart& drob2);
	RationalWithIntPart Easy();
	RationalWithIntPart Integer();
	void print();
};