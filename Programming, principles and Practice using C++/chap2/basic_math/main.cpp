#include <iostream>
#include <cmath>

int main()
{
	int n {};
	
	std::cout << "Please enter a floating point value: ";
	std::cin >> n;
	std::cout << "n == " << n << "\n"; 
	std::cout << "n + 1 == " << n + 1 << "\n"; 
	std::cout << "three times n == " << n * 3 << "\n"; 
	std::cout << "twice n == " << n * 2 << "\n"; 
	std::cout << "n squared == " << n * n << "\n"; 
	std::cout << "half of n == " << n / 2 << "\n"; 
	std::cout << "square root of n == " << std::sqrt(n) << "\n"; 
	std::cout << "n mod 3 == " << n % 3 << "\n"; 

	return 0;
}

