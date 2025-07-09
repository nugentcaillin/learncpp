#include <iostream>
#include <string>


int main()
{
	double age {-1};
	std::string name {};

	std::cout << "Please enter your name and age\n";
	std::cin >> name >> age;
	
	std::cout << "Hello, " << name << ", you are " << (int)(age * 12) << " months old\n"; 

	return 0;
}

