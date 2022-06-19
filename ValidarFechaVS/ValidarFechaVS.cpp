#include <iostream>

#include "Valid.h"

using namespace std;

int main() {
	Valid a;
	a.run();
	return 0; 

	/*auto t = std::time(nullptr);
	auto tm = *std::localtime(&t);

	std::ostringstream oss;
	oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
	auto str = oss.str();

	std::cout << str << std::endl;*/
}