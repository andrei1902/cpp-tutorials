#include <iostream>
#include <iomanip>

void logShit(float number) {
	std::cout << std::setprecision(20);
	std::cout << number << " size " << sizeof(number) << std::endl;
}

void logShit(double number) {
	std::cout << std::setprecision(20);
	std::cout << number << " size " << sizeof(number) << std::endl;
}

void logShit(long double number) {
	std::cout << std::setprecision(20);
	std::cout << number << " size " << sizeof(number) << std::endl;
}

int main(){
	float number1 {1.1234567890f}; // precision is usually too limited
	double number2 {1.1234567890};
	long double number3 {1.1234567890L};
	float number4 {192400023.0f}; // error narrow conversion
	double number5 {192400023.0};
	// Scientific notation
	double number6 {1.92400023e8};
	double number7 {1.924e8};           // Can ommit the lower 00023
	double number8 {0.00000000003498};
	double number9 {3.498e-11}; // multiply with 10 exp(-11)



	logShit(number1);
	logShit(number2);
	logShit(number3);
	logShit(number4);
	logShit(number5);
	logShit(number6);
	logShit(number7);
	logShit(number8);
	logShit(number9);

	//Infinity and Nan
	std::cout << std::endl;
	std::cout << "Infinity and NaN" << std::endl;
	
	double number10{ -5.6 };
	double number11{};//Initialized to 0
	double number12{};  //Initialized to 0

	//Infinity
	double result { number10 / number11 };
	
	
	std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
	std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
	
	//NaN
	result = number11 / number12;
	
	
	std::cout << number11 << "/" << number12 << " = " << result << std::endl;

	return 0;
}