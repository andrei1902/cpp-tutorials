#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

std::string getDayName(int day) {
	switch (day) {
		case 0: return "Monday";
		case 1: return "Tuesday";
		case 2: return "Wednesday";
		case 3: return "Thursday";
		case 4: return "Friday";
		case 5: return "Saturday";
		case 6: return "Sunday";
		default: return "Invalid";
	}
}

int main() {
	int day;
	std::string dayName;
	std::string computedDayName;
	cout << "Witch day is today [1-7]?";
	cin >> day;
	cout << endl;

	dayName = getDayName(day - 1);
	if (dayName == "Invalid") {
		cout << day << " is not a valid day";
		return 0;
	}

	int days;
	cout << "How many days have passed up to today?";
	cin >> days;
	cout << endl;

	int computedDay = ((day - 1) - days) % 7;
	computedDayName	= getDayName(computedDay < 0 ? 7 + computedDay : computedDay);

	cout << "Today is " << dayName << endl;
	cout << "If we went " << days << " days in the past we would hit a " << computedDayName << endl;
	return 0;
}