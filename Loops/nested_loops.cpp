#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iostream>
#include <iomanip>

int main()
{
	const size_t ROWS{12};
	const size_t COLS{3};

	// cout << "Tabular data visualization with nested for loops : " << endl;

	// for (size_t row{0}; row < ROWS; ++row)
	// {

	// 	for (size_t col{0}; col < COLS; ++col)
	// 	{

	// 		cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")  ";
	// 	}
	// 	cout << endl;
	// }

	// While loop
	cout << endl;
	cout << "Tabular data visualization with nested while loops : " << endl;

	size_t row{0};
	size_t col{0};

	while (row < ROWS)
	{

		while (col < COLS)
		{
			std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ") ";
			++col;
		}
		std::cout << std::endl;
		col = 0;
		++row;
	}

	// std::cout
	// 		<< std::endl;
	// std::cout << "Tabular data visualization with nested do while loops : " << std::endl;

	// size_t row = 0;
	// size_t col = 0;

	// do
	// {

	// 	do
	// 	{
	// 		std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")   ";
	// 		++col;
	// 	} while (col < COLS);

	// 	std::cout << std::endl;
	// 	col = 0;
	// 	++row;
	// } while (row < ROWS);

	return 0;
}