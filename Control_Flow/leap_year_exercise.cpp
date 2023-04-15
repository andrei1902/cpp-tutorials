#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

bool is_leap_year( unsigned int year){
	bool is_leap{};

	//Don't modify anything above this line
	//Your code goes below this line
	return year % 4 == 0;
	//Your code goes above this line
	//Don't modify anything below this line

	return is_leap;
}

int main()
{
	const int test_value {2012};
	const bool is_leap = is_leap_year(test_value);
	cout << boolalpha << is_leap;
	return 0;
}