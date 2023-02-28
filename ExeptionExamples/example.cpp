#include <iostream>

float div(float x, float y , bool& status) {
	if (y == 0) {
		std::cerr << "Error in func. div: division on zero";
		status = false;
		return -1;
	}
	return x / y;
}
int main() {
	bool st = true;
	float a = 5, b = 0;
	float res = div(a, b, st);
	if (st) std::cout << res;
}