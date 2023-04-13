#include <iostream>

int global_var1{23};

void some_function()
{
	int local_var{10};
	std::cout << "Inside some_function globa_var: " << global_var1 << std::endl;
	std::cout << "Inside some_function local_var: " << local_var << std::endl;
}

int main()
{
	std::cout << "Inside main function globl_var: " << global_var1 << std::endl;
	some_function();
	return 0;
}