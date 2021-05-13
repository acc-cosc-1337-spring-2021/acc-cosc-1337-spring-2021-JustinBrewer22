#include "dna.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double gc_count;

    for(int count = 0; count <= dna.length(); count = count + 1)
    {
        if (dna[count] == 'G' || dna[count] == 'C')
        {
            gc_count += 1;
        }
    }

    return (gc_count / dna.length());
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse;

    for(int count = dna.length() - 1; count >=0; count = count - 1)
    {
        reverse.push_back(dna[count]);
    }
    
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string dna_complement = get_reverse_string(dna);

    for (int i = 0; i < dna_complement.length(); i = i + 1)
    {
        if (dna_complement[i] == 'A')
        {
            dna_complement[i] = 'T';
        }
        else if (dna_complement[i] == 'T')
        {
            dna_complement[i] = 'A';
        }
        else if (dna_complement[i] == 'C')
        {
            dna_complement[i] = 'G';
        }
        else if (dna_complement[i] == 'G')
        {
            dna_complement[i] = 'C';
        }
    }
    return dna_complement;
}

