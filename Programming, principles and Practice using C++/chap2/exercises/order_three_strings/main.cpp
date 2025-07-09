#include <iostream>
#include <string>

/* Swap val2 and val1 if val1 > val2 */

void order_two(std::string& val1, std::string& val2)
{
	if (val1 > val2)
	{
		std::string tmp { val1 };
		val1 = val2;
		val2 = tmp;
	}
}


/* Accept three numbers from user
 * and output them in order */

int main()
{
	std::string val1 {};
	std::string val2 {};
	std::string val3 {};

	std::cout << "Enter three strings: ";
	std::cin >> val1 >> val2 >> val3;

	// order the three values
	order_two(val2, val3);
	order_two(val1, val2);
	order_two(val2, val3);

	std::cout << "Values in order: " << val1 << ", " << val2 << ", " << val3
			  << "\n";

	return 0;
}

