#include <iostream>

int main()
{
	double multiplier{16};

	for (auto multiplier{4}; auto i : {1, 2, 3, 4, 5, 6, 7, 8, 9})
	{
		std::cout << "Result: " << (i * multiplier) << std::endl;
	}

	std::cout << "Multiplier: " << (multiplier) << std::endl;

	return 0;
}