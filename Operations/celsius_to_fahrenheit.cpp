#include <iostream>

int main(){
	double celsius = 0;
	std::cout << "Write temperature in celsius:" << std::endl;
	std::cin >> celsius;
	double farenheit = (9.0 / 5) * celsius + 32;
	std::cout << celsius << " Celsius is " << farenheit << " in Farenheit";
	return 0;
}