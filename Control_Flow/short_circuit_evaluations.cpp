#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

bool car() {
	cout << "car function running" << std::endl;
	return false;
}

bool house() {
	cout << "house function running" << std::endl;
	return true;
}
bool job() {
	cout << "job function running" << std::endl;
	return false;
}
bool spouse() {
	cout << "spouse function running" << std::endl;
	return false;
}

int main() {
	if (car() && house() && job() && spouse()) {
		cout << "I am happy &&" << std::endl;
	} else {
		cout << "I am sad &&" << std::endl;
	}

	if (car() || house() ||job() || spouse()) {
		std::cout << "I am happy ||" << std::endl;
	} else {
		std::cout << "I am sad ||" << std::endl;
	}
	return 0;
}