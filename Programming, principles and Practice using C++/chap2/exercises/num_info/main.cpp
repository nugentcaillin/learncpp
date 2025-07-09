#include <iostream>

/* Get two numbers,
 * display smaller, larger, sum, difference, product and ratio */

int main()
{
	double val1 {};
	double val2 {};
	std::cout << "Enter two numbers: ";
	std::cin >> val1 >> val2;

	double smaller { val1 > val2 ? val2 : val1 };
	double larger { val1 > val2 ? val1 : val2 };
	double sum { val1 + val2 };
	double difference { larger - smaller };
	double product { val1 * val2 };
	double ratio { val1 / val2 };
	
	std::cout << "The smaller is: " << smaller << "\n";
	std::cout << "The larger is: " << larger << "\n";
	std::cout << "The sum is: " << sum << "\n";
	std::cout << "The difference is: " << difference << "\n";
	std::cout << "The product is: " << product << "\n";
	std::cout << "The ratio of " << val1 << " to " << val2 << " is: " 
			  << ratio << "\n";
	return 0;
}

