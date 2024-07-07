#include <iostream>

void multiples_of_19();

int main()
{
	multiples_of_19();
	return 0;
}

void multiples_of_19() {
	const size_t COUNT{1000};
	size_t i{0};

	for (size_t i = 100; i < COUNT; i++)
	{
		size_t multiple_of_19{0};
		if (i % 19 == 0)
		{
			multiple_of_19 = i;
			std::cout << multiple_of_19 << " ";
		}
	}
}