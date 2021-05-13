//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include <iostream>
using namespace std;
using std::cout;
using std::cin;

int main() 
{
	int numgrade;
	string letter_grade;

	cout << "Please enter your grade in numerical format: ";
	cin >> numgrade;

	if(numgrade >= 0 || numgrade <= 100)
	{
		cout << "\n";
		letter_grade = get_letter_grade_using_if(numgrade);
		cout << "(using if method) Your grade is a(n): " << letter_grade;

		cout << "\n";
		cout << "\n";
		letter_grade = get_letter_grade_using_switch(numgrade);
		cout << "(using switch method) Your grade is a(n): " << letter_grade;

	}
	else 
	{
		cout<<"ERROR: Numerical grade inputted is above 100 or below 0";
	}

	return 0;
}

