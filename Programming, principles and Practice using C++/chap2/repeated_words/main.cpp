#include <iostream>
#include <string>

int main()
{
	std::string curr {};
	std::string prev {};
	while (std::cin >> curr)
	{
		if (curr == prev)
		{
			std::cout << "repeated word: " << curr << "\n";
		}
		prev = curr;
	}
	return 0;
}

