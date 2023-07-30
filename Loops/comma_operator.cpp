#include <iostream>
#include <chrono>
using std::cout;
using std::endl;

int main()
{
	int increment{5};
	int number1 {10};
	int number2 {20};
	int number3 {25};

	int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);

	cout << "number1: " << number1 << endl;
	cout << "number2: " << number2 << endl;
	cout << "number3: " << number3 << endl;
	cout << "result: " << number3 << endl;

	return 0;
}