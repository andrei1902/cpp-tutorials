#include <iostream>

void logResult(std::string text, short int number) {
	std::cout << "size of " << text << ": " << sizeof(number) << std::endl;
}

void logResult(std::string text, int number) {
	std::cout << "size of " << text << ": " << sizeof(number) << std::endl;
}

void logResult(std::string text, char number) {
	std::cout << "size of " << text << ": " << sizeof(number) << std::endl;
}

int main(){
	short int var1 {10}; // 2 bytes
	short int var2 {20};

	char var3 {40}; // 1 byte
	char var4 {50};

	logResult("var1", var1);
	logResult("var2", var2);
	logResult("var3", var3);
	logResult("var4", var4);

	auto result1 = var1 + var2; // 4 bytes
	auto result2 = var3 + var4;

	logResult("result1", result1);
	logResult("result2", result2);

	return 0;
}