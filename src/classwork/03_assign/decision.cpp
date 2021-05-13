//cpp
#include "decision.h"
using namespace std;

string get_letter_grade_using_if(int numgrade)
{
    string letter_grade;

    if(numgrade >= 90 && numgrade <= 100)
    {
        letter_grade = "A";
    }
    else if(numgrade >=80 && numgrade <= 89)
    {
        letter_grade = "B";
    }
    else if(numgrade >=70 && numgrade <= 79)
    {
        letter_grade = "C";
    }
    else if(numgrade >=60 && numgrade <= 69)
    {
        letter_grade = "D";
    }
    else
    {
        letter_grade = "F";
    }
        return letter_grade;
}

string get_letter_grade_using_switch(int numgrade)
{
    string letter_grade;
    numgrade = numgrade - (numgrade % 10);

    switch(numgrade)
    {
        case 100: case 90:
        letter_grade = "A";
        break;
        case 80:
        letter_grade = "B";
        break;
        case 70:
        letter_grade = "C";
        break;
        case 60:
        letter_grade = "D";
        break;
        case 50: case 40: case 30: case 20: case 10: case 0:
        letter_grade = "F";
        break;
    }
        return letter_grade;
}