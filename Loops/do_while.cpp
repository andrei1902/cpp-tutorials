#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const size_t COUNT{10};
	size_t i{0};

	do {
		cout << "i: " << i << endl;
		++i;
	} while (i < COUNT);
	cout << "Done" << endl;
	cout << "i: " << i << endl;

	return 0;
}