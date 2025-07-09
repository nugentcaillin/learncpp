#include <iostream>
#include <string>

int main()
{
	int num {};
	std::cout << "Enter an integer: ";
	std::cin >> num;
	std::string result { num % 2 == 0 ? "even" : "odd" };
	std::cout << "The value " << num << " is an " << result << " number\n";
	return 0;
}

