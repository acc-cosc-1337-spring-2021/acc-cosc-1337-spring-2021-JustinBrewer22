//write include statements
//test
#include "dna.h"
#include <iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char rerun;
	char input;
	string dna;

	do
	{
		cout << "Please select '1' for Get GC Content, or '2' for Get DNA Complement: \n";
		cin>>input;
		switch (input)
		{
			case '1':
				cout << "Please enter a DNA string: \n";
				cin >> dna;
				cout << "The GC content is: " << get_gc_content(dna) << "\n";
				break;
			
			case '2':
				cout << "Please enter a DNA string: \n";
				cin >> dna;
				cout << "The DNA Complement is: " << get_dna_complement(dna) << "\n";
				break;
			
			default:
				cout << "You did not select '1' or '2'.";
				break;
		}

		cout << "Enter 'Y' to quit or enter any other key to continue using the program. \n";
		cin >> rerun;
	} 
	while (!(rerun == 'y' || rerun == 'Y'));
	return 0;
}