#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const size_t COUNT{100000};

	for (size_t i{0}; i < COUNT; ++i) {
		cout << "i: " << i << endl;
	}
	cout << "Done" << endl;

	return 0;
}