#include <iostream>

/* Swap val2 and val1 if val1 > val2 */

void order_two(int& val1, int& val2)
{
	if (val1 > val2)
	{
		int tmp { val1 };
		val1 = val2;
		val2 = tmp;
	}
}


/* Accept three numbers from user
 * and output them in order */

int main()
{
	int val1 {};
	int val2 {};
	int val3 {};

	std::cout << "Enter three integers: ";
	std::cin >> val1 >> val2 >> val3;

	// order the three values
	order_two(val2, val3);
	order_two(val1, val2);
	order_two(val2, val3);

	std::cout << "Values in order: " << val1 << ", " << val2 << ", " << val3
			  << "\n";

	return 0;
}

