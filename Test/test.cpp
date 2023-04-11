//Система тестов
#include <iostream>
#include <math.h>

#define RESET "\033[0m"  //сброс
#define BLACK "\033[30m" //черный
#define RED "\033[31m"   //красный
#define GREEN "\033[32m" //зеленый

enum Status { FAILED = 0, PASSED = 1 };

template <typename T>
class Test {
	std::string name; //название теста
	T param1, param2; //рассматриваемые параметры
	T expected;       //ожидаемый результат
	T real;           //реальный результат
	Status status;    //статус (passed / failed)
	time_t timer;     //таймер
	T(*func)(T, T);
public:
	/*...*/
};

template <typename T>
class Tests {
	std::string name;
	Test<T>** all;
	size_t size;
	size_t count;
public:
	Tests() {}
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