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
	Rational(const Rational& drob): numerator(drob.numerator), denominator(drob.denominator) {}

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
	RationalWithIntPart(int _numerator, int _denominator, int _integer): integer(_integer), Rational(_numerator, _denominator) {}
	RationalWithIntPart(RationalWithIntPart&drob) {
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

		Rational resR = convertNum1.Sub(convertNum2);


		RationalWithIntPart res(resR.getNumerator() % resR.getDenominator(),
			resR.getDenominator(),
			resR.getNumerator() / resR.getDenominator());

		/*//вычисляем
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.denominator - drob2.numerator * this->denominator;
		//возвращаем в смешанное число
		if (res.numerator > res.denominator) {
			res.integer = res.numerator / res.denominator;
			res.numerator = res.numerator % res.denominator;
			
		}
		else if (res.numerator == res.denominator) {
			res.integer = 1;
		}
		else {
			return res;
		}*/
		return res;
	}

	RationalWithIntPart Mult(const RationalWithIntPart& drob2) {
		RationalWithIntPart res;
		//переводим в неправильные дроби
		int num1 = this->numerator + this->denominator * this->integer;
		int num2 = drob2.numerator + drob2.denominator * drob2.integer;
		//вычисляем
		res.denominator = this->denominator * drob2.denominator;
		res.numerator = this->numerator * drob2.numerator;
		//возвращаем в смешанное число
		if (res.numerator > res.denominator) {
			res.integer = res.numerator / res.denominator;
			res.numerator = res.numerator % res.denominator;

		}
		else if (res.numerator == res.denominator) {
			res.integer = 1;
		}
		else {
			return res;
		}
		return res;
	}

	void print() {
		std::cout << this->integer << " целых " << this->numerator << "/" << this->denominator;
	}
};


int main() {
	setlocale(LC_ALL, "rus");
	/*Rational d1(3, 4), d2(3, 5), d3;
	d3 = d2.Add(d1);
	d3.print();*/
	RationalWithIntPart dr1(1, 4, 2), dr2(2, 3, 1), dr3;
	dr3 = dr2.Mult(dr1);
	dr3.print();
}

/*int NOD(int a, int b) {
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;
  if (a > b)
    return NOD(a%b, b);
  return NOD(a, b%a);
}
*/