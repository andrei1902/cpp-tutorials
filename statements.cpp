#include <iostream>

// Function
void logShit(int first_number, int second_number) {
	std::cout << "First number " << first_number << std::endl;
	std::cout << "Second number " << second_number << std::endl;
}

void logShit(int number) {
	std::cout << "Number " << number << std::endl;
}

int addNumbers(int first_number, int second_number) {
	return first_number + second_number;
}

int main(){
	int first_number {9}; // Statement
	int second_number {12};
	logShit(first_number, second_number);
	logShit(addNumbers(first_number, second_number));
	return 0;
}