//Система тестов
#include <iostream>
#include <math.h>
#include <ctime>

#define RESET "\033[0m"  //сброс
#define BLACK "\033[30m" //черный
#define RED "\033[31m"   //красный
#define GREEN "\033[32m" //зеленый

using namespace std;

enum Status { FAILED = 0, PASSED = 1 };

template <typename T>
class Test {
public:
	std::string name; //название теста
	T param1, param2; //рассматриваемые параметры
	T expected;       //ожидаемый результат
	T real;           //реальный результат
	Status status;    //статус (passed / failed)
	time_t timer;     //таймер
	T(*func)(T, T);
public:
	Test() : name("default"), param1(NULL), param2(NULL), expected(NULL), real(NULL), status(0), timer(0), func(nullptr) {}
	Test(std::string _name, T _param1, T _param2, T _expected, T(*_func)(T, T)) : name("default"), status(FAILED), timer(0), func(nullptr) {
		func = _func;
		name = _name;
		param1 = _param1;
		param2 = _param2;
		expected = _expected;
	}
	Test(Test& t) {
		func = t.func;
		name = t.name;
		param1 = t.param1;
		param2 = t.param2;
		expected = t.expected;
	}
	~Test() {};
	ostream& operator << (ostream& out) {
		out << "---------------------" << endl;
		out << "\tName: " << name << endl;
		out << "\tFirst parametr: " << param1 << endl;
		out << "\tSecond parametr: " << param2 << endl;
		out << "\tExpected: " << expected << endl;
		out << "\tReal: " << real << endl;
		out << "\tTimer: " << timer << " ms" << endl;
		out << "\tStatus: " << status << endl;
		out << "---------------------" << endl;
		return out;
	}
	void start() {
		unsigned int start_time = clock();
		real = func(param1, param2);
		unsigned int end_time = clock();
		timer = end_time - start_time;
		if (real == expected) { status = PASSED; }
	}
};

template <typename T>
class Tests {
	std::string name;
	Test<T>** all;
	size_t size;
	size_t count;
public:
	Tests() : name("default"), size(0), count(0) {
		all = nullptr;
	}
	Tests(std::string _name, size_t _size) {
		name = _name;
		size = _size;
	}
	Tests(Tests& t) {
		name = t.name;
		size = t.size;
		count = t.count;
		all = new Test[count];
		for (int i = 0; i < count; i++) {
			all[i] = t.all[i];
		}
	}
	~Tests() {
		delete[] all;
	}
	void createTest(std::string name, T(*_func)(T, T),  T tmp1, T tmp2, T expected) {

		Test<T>* tmp = new Test<T>(name, _func, tmp1, tmp2, expected);
		Test<T>** tmp_mass = new Test<T>*[count + 1];
		for (int i = 0; i < count; i++) {
			tmp_mass[i] = all[i];
		}
		tmp_mass[count] = tmp;
		delete all;
		all = tmp_mass;
		count++;
	}
	void runAll() {
		int true_test = 0;
		for (int i = 0; i < count; i++) {
			cout << GREEN << "[   RUN      ] " << RESET << all[i]->name << endl;
			all[i]->start();
			if (all[i]->status == PASSED) {
				true_test++;
				cout << GREEN << "[       OK   ] " << RESET << all[i]->name << " (" << all[i]->timer << " ms)" << endl;
			}
			else if (all[i]->status == FAILED) {
				cout << RED << "[   FAILED   ] " << RESET << endl;
				cout << "\tExpected value: " << all[i]->expected << endl;
				cout << "\tWitch is: " << all[i]->real << endl;
				size++;

			}
		}

		cout << GREEN << "[============] " << RESET << count << " tests from run" << endl;
		cout << GREEN << "[   PASSED   ] " << RESET << true_test << " tests" << endl;
		cout << RED << "[   FAILES   ] " << RESET << size << " tests, listed below:" << endl;
		for (int i = 0; i < count; i++) {
			if (all[i]->status != PASSED) {
				cout << "\t" << all[i]->name << endl;
			}
		}

	}
};


//Переставить значения двух переменных без использования временных переменных
int Swap(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
	return a, b;
}
//Максимальное из двух значений без условных операторов
int Max(int a, int b) {
	int max = (a + b + abs(a - b)) / 2;
	return max;
}

int main() {
	std::string testsName = "MaxOfTwoNumbersWithoutThirdVar";
	Tests<int>tests(testsName, 4);
	tests.createTest("ok_then_first_is_bigger", Max, 15, 8, 15);
	tests.createTest("ok_then_second_is_bigger", Max, 6, 13, 13);
	tests.createTest("ok_then_are_equal", Max, 9, 9, 9);
	tests.createTest("ok_with_negative_values", Max, -9, -13, -10);
	tests.runAll();
	return 0;
}