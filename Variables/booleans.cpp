#include <iostream>

int main(){
	bool red_light {true};
	bool green_light {false};

	if (red_light == true) {
		std::cout << "Stop!" << std::endl;
	} else {
		std::cout << "Go though" << std::endl;
	}

	if (green_light == true) {
		std::cout << "The light is green" << std::endl;
	} else {
		std::cout << "The light is NOT green" << std::endl;
	}

	std::cout << sizeof(red_light) << std::endl;
	std::cout << "red_light " << red_light << std::endl;
	std::cout << std::boolalpha;
	std::cout << "green_light " << green_light << std::endl;

	return 0;
}