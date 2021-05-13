//cpp
#include "loops.h"

int factorial(int num)
{
    int a = 1;
    
    while(num > 0)
    {
        a *= num;
        num -= 1;
    }
    return a;
}