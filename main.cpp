#include <iostream>
#include "math_lib.h"

int main() {
	std::cout << "executing c++ code" << std::endl;
	int res = add(6, 7);
	std::cout << "result from c library = " << res << std::endl;
	
	return 0;
}