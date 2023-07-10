#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int age;
	cout << "Please type in your age:";
	cin >> age;
	cout << endl;

	if (age < 21) {
		cout << "Sorry, you are too young for the treatment";
		return 0;
	}

	if (age > 39) {
		cout << "Sorry, you are too old for the treatment";
		return 0;
	}

	cout << "You are eligible for the treatment";

	return 0;
}