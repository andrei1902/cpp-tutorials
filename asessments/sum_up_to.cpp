#include <iostream>
#include <chrono>
using std::cout;
using std::endl;

namespace chrono = std::chrono;

unsigned int sum_up_to_99(int n){
	unsigned int sum{};
	sum = n * (n + 1) / 2;
	return sum;
}

int main()
{
	int n{99};
	int sum = sum_up_to_99(n);
	cout << "Result: " << sum << endl;

	return 0;
}