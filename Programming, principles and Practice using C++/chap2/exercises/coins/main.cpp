#include <iostream>
#include <string>
/* prompt user for number of each type of US coin.
 * output number of each coin accounting for single vs plural
 * and a total amount in dollars */

int main()
{
	std::string coin_names_plural[] { "pennies", "nickels", "dimes", "quarters"
									, "half dollars" };
	std::string coin_names_singular[] { "penny", "nickel", "dime", "quarter"
									  , "half dollar" };
	int coin_amounts[] { 0, 0, 0, 0, 0 };
	int coin_value_cents[] { 1, 5, 10, 25, 50 };
	
	int total_cents { 0 };
	
	// get number of each coin
	for (int i { 0 }; i < 5; ++i)
	{
		std::cout << "Enter number of " << coin_names_plural[i] << ": ";
		std::cin >> coin_amounts[i];
		total_cents += coin_amounts[i] * coin_value_cents[i];
	}

	// display number of each coin
	for (int i { 0 }; i < 5; ++i)
	{
		std::string coin_name { coin_amounts[i] == 1 ? coin_names_singular[i]
							  : coin_names_plural[i]};
		std::cout << "You have " << coin_amounts[i] << " " << coin_name << "\n";
	}

	// display dollar value
	std::cout << "The value of all your coins is $" << (double)total_cents / 100
			  << "\n";

	return 0;
}

