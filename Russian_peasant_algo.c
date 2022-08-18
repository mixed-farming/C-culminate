//Given two integers, write a function to multiply them without using multiplication operator.
//The idea is to use bitwise operators.

#include <stdio.h>

int main()
{
    int a=16,b=3;
    int res = 0; // initialize result
 
    // While second number doesn't become 1
    while (b > 0)
    {
        // If second number becomes odd, add the first number to result
        if (b & 1)
            res = res + a;
 
        // Double the first number and halve the second number
        a = a << 1;
        b = b >> 1;
    }
    printf("%d",res);

    return 0;
}
