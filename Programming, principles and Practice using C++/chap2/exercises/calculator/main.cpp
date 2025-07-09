#include <iostream>
#include <string>

int main()
{	
	// left hand operand
	double lhs {};
	// right hand operand
	double rhs {};
	double result {};
	// operator
	std::string op {};

	std::cout << "Please enter an operand, followed by two operands: ";
	std::cin >> op >> lhs >> rhs;
	
	if (op == "+" || op == "plus") result = lhs + rhs;
	else if (op == "-" || op == "minus") result = lhs - rhs;
	else if (op == "*" || op == "mul") result = lhs * rhs;
	else if (op == "/" || op == "div") result = lhs / rhs;
	else {
		std::cout << "Unsupported operation\n";
		return 0;
	}

	std::cout << lhs << " " << op << " " << rhs << " = "
			  << result << "\n";
	return 0;
}

