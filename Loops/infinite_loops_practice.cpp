#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	char operation; // +,-,*,/
	double operand1;
	double operand2;
	bool end {false};

	cout << "Welcome to awesome calculator" << endl;

	while((end == false))
	{
		std::cout << "--------------------------------------------" << endl;
		cout << "What operation do you want help with? " << endl;
		cout << "+,-,* and / are supported. Please choose one and type below"<< endl;
		cout << "Your operation : ";
		cin >> operation;
		
		cout << endl;
		cout << "Please type in your two operands separated by a space and hit enter: ";
		cin >> operand1 >> operand2;
		cout <<endl;

		switch(operation){
			case '+':
				cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << endl;
				break;
			case '-':
				cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << endl;
				break;
			case '*':
				cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << endl;
				break;
			case '/':
				cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << endl;
				break;
			default:
				cout << operation << " operation not supported" << endl;
				break;
		}

		cout << "Continue ? ( Y | N) : ";
		
		char go_on;
		cin >> go_on;
		if((go_on == 'Y') || (go_on == 'y'))
		{
			end = false;
		}
		else
		{
			end = true;
		}
	}

	cout << "Done helping out. BYE!" << endl;
	return 0;
}