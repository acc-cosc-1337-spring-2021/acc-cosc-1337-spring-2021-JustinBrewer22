//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char repeat;
	int num;
	do{
		do{
			cout << "Please enter a number 1 to 10 : ";
			cin >> num;

		} while(!(num >= 1 && num <= 10));

		
		cout << "The factorial of "<< num <<" is: " << factorial(num) << "\n";

		cout << "Would you like to calculate another factorial? Please enter: (Y for Yes) or (N for No): \n";
		cin >> repeat;
		} 
	
	while(repeat == 'y' || repeat == 'Y');

	return 0;
}