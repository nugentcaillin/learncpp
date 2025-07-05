#include <iostream>


/* Recieve two numbers from the user,
 * display the result of the addition of the two
 * and the subtraction of the second from the first */


/* Prompt the user for and retrieve an integer */
int promptInteger()
{
	int num {};
	bool failed {};
	// continue to prompt user until valid input recieved
	do 
	{
		std::cout << "Enter an integer: ";

		failed = (std::cin >> num).fail();
		
		// skip past errored input and reset error flag
		if (failed)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}

	} while (failed);
	
	return num;
}




int main()
{
	int first { promptInteger() };
	int second { promptInteger() };

	std::cout << first << " + " << second << " is " << first + second << ".\n";
	std::cout << first << " - " << second << " is " << first - second << ".\n";

	return 0;
}

