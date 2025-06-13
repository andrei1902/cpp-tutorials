#include "random_array.h"
#include <random>

std::vector<int> generateRandomArray()
{
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<> size_dist(1, 10);
	std::uniform_int_distribution<> num_dist(0, 100);

	int size = size_dist(gen);
	std::vector<int> arr(size);
	for (size_t i = 0; i < arr.size(); ++i)
	{
		arr[i] = num_dist(gen);
	}
	return arr;
}
