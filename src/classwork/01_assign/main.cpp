//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	int num;
	cout << "Please type a number to be multiplied by 5: ";
	cin >> num;

	int result;
	result = multiply_numbers(num);
	cout << "Your number multiplied by 5 is: " << result <<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout << "4 Times 5 is: "<< result;

	return 0;
}