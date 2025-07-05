#include <iostream>

int main()
{
	// copy initialization
	int good_copy = 12;
	int bad_copy = 12.5;
	std::cout << "copy of 12: " << good_copy << ", copy of 12.5: " << bad_copy << std::endl;
	// 12 12

	// direct initialization
	int good_direct( 12 );
	int bad_direct( 12.5 );
	std::cout << "direct of 12: " << good_direct << ", direct of 12.5: " << bad_direct << std::endl;
	// 12 12

	// list initialization
	int good_list { 12 };


	// this throws a compilation error
	int bad_list { 12.5 };



	return 0;
}

