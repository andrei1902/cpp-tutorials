#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int minX = -20;
	int maxX = 20;
	int minY = -10;
	int maxY = 10;
	int xLocation;
	int yLocation;
	cout << "Welcome to territory control. Please type in your x and y position" << endl;
	cout << "Type in your x location:" << endl;
	cin >> xLocation;
	cout << endl;
	cout << "Type in your y location:" << endl;
	cin >> yLocation;
	cout << endl;

	if (xLocation > minX && xLocation < maxX && yLocation > minY && yLocation < maxY) {
		cout << "You are completely sorounded. Don't move." << endl;
		return 0;
	}
	cout << "You are out of reach!" << endl;
	return 0;
}