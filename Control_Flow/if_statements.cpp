#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number1{65};
	int number2{60};
	// const bool result = (number1 < number2);
	// cout << boolalpha << "result: " << result << endl;

	if (number1 < number2){
		cout << number1 << " is smaller than " << number2;
	} else {
		cout << number1 << " is larger than " << number2;
	}

	return 0;
}