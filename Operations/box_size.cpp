#include <iostream>

double getValue(std::string question) {
	double value = 0.0;
	std::cout << question << std::endl;
	std::cin >> value;
	return (double)value;
}

int main(){
	std::cout << "Let's see how big is this bit... box." << std::endl;
	double length = getValue("What is the length?");
	double width = getValue("What is the width?");
	double height = getValue("What is the height?");
	double base_area = width * length;
	double volume = base_area * height;
	std::cout << "The base area is " << base_area << std::endl;
	std::cout << "The volume is " << volume << std::endl;
	return 0;
}