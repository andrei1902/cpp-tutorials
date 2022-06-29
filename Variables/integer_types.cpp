#include <iostream>

int main(){
	// Braced initializer
	int elephant_count; // contains garbage count
	int lion_count{}; // by default 0
	int cat_count {15};
	int animals {lion_count + cat_count};
	// int narrow_conversion{2.9}; will throw error or warning
	std::cout << animals << " " << sizeof(animals) << std::endl;

	// Functional initialization
	int apple_count(6);
	int orange_count(11);
	int narrow_conv(2.9);
	int fruit_count(apple_count + orange_count + narrow_conv);
	std::cout << fruit_count << " " << sizeof(fruit_count) << std::endl;

	// Assignment initialization
	int bike_count = 2;
	int car_count = 5;
	int narrow = 2.9;
	int vehicle_count = bike_count + car_count + narrow;
	std::cout << vehicle_count << " " << sizeof(vehicle_count) << std::endl;

	return 0;
}