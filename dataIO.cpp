#include <iostream>
#include <string>

int main(){
	// Output
	std::cout << "Standard output" << std::endl;
	int number = 21;
	std::cout << number << std::endl;
	std::cerr << "Aw shit nigga, you dun fucked up!" << std::endl;
	std::clog << "Log log!" << std:: endl;

	// Input
	int age;
	std::string name;
	std::cout << "Please type your name and age " << std::endl;

	// standard
	// std::cin >> name;
	// std::cin >> age;

	// in one line
	// std::cin >> name >> age;

	// Data with spaces
	std::string full_name;
	std::getline(std::cin, full_name);
	std::cin >> age;

	std::cout << "Hello " << name << " you are " << age << " years old" << std::endl;
	std::cout << "Hello " << full_name << " you are " << age << " years old" << std::endl;
	return 0;
}