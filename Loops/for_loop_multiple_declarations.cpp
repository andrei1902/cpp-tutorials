#include <iostream>
#include <chrono>
using std::cout;
using std::endl;

namespace chrono = std::chrono;

int main()
{
	auto start_time = chrono::high_resolution_clock::now();
	const size_t COUNT{10};

	for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1){
		cout << "sizeof(i):" << i << endl;
		cout << "sizeof(x):" << x << endl;
		cout << "sizeof(y):" << y << endl;
		cout << "----------" << endl;
	}

	return 0;
}