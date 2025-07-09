#include <iostream>
#include <string>
#include <stdexcept>

int main()
{
	std::string first_name {};
	std::string another_name {};
	int age;

	std::cout << "Please enter the name of the person you want to write to: ";
	std::cin >> first_name;
	std::cout << "Please enter their age: ";
	std::cin >> age;
	if (age <= 0 || age >= 110)
	{
		throw std::invalid_argument("you're kidding!");
	}
	std::cout << "Please enter the name of another friend: ";
	std::cin >> another_name;

	std::cout << "Dear " << first_name << ",\n";
	std::cout << "\tHow are you? I am fine. I miss you.\n";
	std::cout << "What have you been up to lately?\n";
	std::cout << "Have you seen " << another_name << " lately?\n";
	std::cout << "I hear you just had a birthday and you are " << age << " years old\n";
	if (age < 12)
	{
		std::cout << "Next year you will be " << age + 1 << "\n";
	} else if (age == 17)
	{
		std::cout << "Next year you will be able to vote\n";
	} else if (age > 70)
	{
		std::cout << "Are you retired?\n";
	}
	std::cout << "Yours sincerely,\n\n\n" << first_name << "\n";

	return 0;
}

