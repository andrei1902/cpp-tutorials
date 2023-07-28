#include <iostream>
#include <chrono>
using std::cout;
using std::endl;

namespace chrono = std::chrono;

int main()
{
	auto start_time = chrono::high_resolution_clock::now();
	const size_t COUNT{10};

	for (size_t i = 0; i < COUNT; ++i) {
		cout << i << ": I love C++" << endl;
	}

	cout << "Loops done" << endl;

	auto end_time = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
	cout << "Execution time: " << duration.count() << " milliseconds" << endl;

	return 0;
}