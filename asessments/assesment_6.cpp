#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int day;
	std::string dayName;
	cout << "Witch day is today [1-7]?";
	cin >> day;
	cout << endl;

	switch (day) {
		case 1: dayName = "Monday"; break;
		case 2: dayName = "Tuesday"; break;
		case 3: dayName = "Wednesday"; break;
		case 4: dayName = "Thursday"; break;
		case 5: dayName = "Friday"; break;
		case 6: dayName = "Saturday"; break;
		case 7: dayName = "Sunday"; break;
		default: dayName = "Invalid"; break;
	}

	if (dayName == "Invalid") {
		cout << day << " is not a valid day";
		return 0;
	}

	cout << "Today is " << dayName << " let's have some fun" << endl;
	return 0;
}