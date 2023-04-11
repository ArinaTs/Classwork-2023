//������� ������
#include <iostream>
#include <math.h>

#define RESET "\033[0m"  //�����
#define BLACK "\033[30m" //������
#define RED "\033[31m"   //�������
#define GREEN "\033[32m" //�������

enum Status { FAILED = 0, PASSED = 1 };

template <typename T>
class Test {
	std::string name; //�������� �����
	T param1, param2; //��������������� ���������
	T expected;       //��������� ���������
	T real;           //�������� ���������
	Status status;    //������ (passed / failed)
	time_t timer;     //������
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


//����������� �������� ���� ���������� ��� ������������� ��������� ����������
int Swap(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
	return a, b;
}
//������������ �� ���� �������� ��� �������� ����������
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