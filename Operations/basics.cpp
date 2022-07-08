#include <iostream>

void logResult(std::string text, int number) {
	std::cout << text << number << std::endl;
}

int main(){
	//Addition
	int number1{2};
	int number2{7};

	int result = number1 + number2;
	logResult("addition result: ", result);

	//Subtraction
	result = number2 - number1 ;
	logResult("subtraction result: ", result);

	result = number1 - number2;
	std::cout << "result : " << result << std::endl;

	//Multiplication
	result = number1 * number2;
	logResult("multiplication result: ", result);

	//Division
	result = number2 / number1;
	std::cout << "result : " << result << std::endl;

	//Modulus
	result = number2 % number1; // 7 % 2
	logResult("Modulus result: ", result);

	result = 31 % 10;
	logResult("Modulus result: ", result);

	return 0;
}