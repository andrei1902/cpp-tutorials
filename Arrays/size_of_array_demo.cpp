#include <iostream>
#include <vector>
#include "random_array.h"

int main()
{
	std::vector<int> scores = generateRandomArray();

	int count{static_cast<int>(scores.size())};

	std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
	if (!scores.empty())
		std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
	std::cout << "count : " << count << std::endl;

	for (size_t i{0}; i < scores.size(); ++i)
	{
		std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
	}

	for (auto i : scores)
	{
		std::cout << "value  : " << i << std::endl;
	}

	for (int score : scores)
	{
		std::cout << score << " ";
	}
	std::cout << std::endl;

	return 0;
}
