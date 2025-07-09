#include <iostream>
#include <string>

int main()
{
	std::string num {};
	std::cout << "Please type a number in english: ";
	std::cin >> num;
	
	int digit {};

	if (num == "zero" || num == "Zero") digit = 0;
	else if (num == "one" || num == "One") digit = 1;
	else if (num == "two" || num == "Two") digit = 2;
	else if (num == "three" || num == "Three") digit = 3;
	else if (num == "four" || num == "Four") digit = 4;
	else {
		std::cout << "Not a number I know\n";
		return 0;
	}

	std::cout << "The corresponding digit for " << num << " is " << digit 
			  << "\n"; 
	return 0;

}

