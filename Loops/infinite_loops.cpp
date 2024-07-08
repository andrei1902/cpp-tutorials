#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for (size_t i = 0;; i++)
	{
		cout << "Infinite for" << endl;
	}

	while (true)
	{
		cout << "Infinite while" << endl;
	}

	do
	{
		cout << "Infinite do while" << endl;
	} while (true);

	return 0;
}