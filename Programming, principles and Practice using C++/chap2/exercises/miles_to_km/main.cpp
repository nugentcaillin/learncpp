#include <iostream>

int main()
{
	double miles {};

	std::cout << "Please enter distance in miles: ";
	std::cin >> miles;
	std::cout << miles << " miles is " << miles * 1.609 << " kilometers\n";
	return 0;
}

