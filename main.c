#include <iostream>


int a = 90;


int main() {

	int a = 10;

	{
		int a = 20;

		a = a + 10;

		::a = 22;

		std::cout << ::a << "," << a << std::endl;
	}

	std::cout << a << std::endl;
	std::cout << ::a << std::endl;
	return 0;
}
