#include <iostream>
#include <chrono>
using std::cout;
using std::endl;

void print_uppercase(){
	for (unsigned char i{0}; i < 255; ++i) {
		if (i == 0x40){
			std::cout << static_cast<char>(i);
			continue;
		}
		if (i > 0x40 && i < 0x5B){
			std::cout << " " << static_cast<char>(i);
		}
	}
}

int main()
{
	print_uppercase();
	return 0;
}