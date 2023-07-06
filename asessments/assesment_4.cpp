#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	cout << "Please type an integral value:";
	cin >> number;
	cout << endl;

	if (number%2 == 0){
		cout << "Number is even";
	} else {
		cout << "Number is odd";
	}

	return 0;
}