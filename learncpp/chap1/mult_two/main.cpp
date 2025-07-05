#include <iostream>

/* Accept a single integer from the user,
 * multiply it by two, then
 * print it back to the user */

int main()
{
	// number we will multiply by two
	int num {};
	
	std::cout << "Enter an Integer: " << std::endl;
	std::cin >> num;

	std::cout << "Double that is: " << num * 2 << "\n";
	std::cout << "Triple that is: " << num * 3 << "\n";
	
	return 0;
}

