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

/*

How it works : 

    The value of a*b is same as (a*2)*(b/2) if b is even, otherwise the value is same as ((a*2)*(b/2) + a). 
In the while loop, we keep multiplying ‘a’ with 2 and keep dividing ‘b’ by 2. 
If ‘b’ becomes odd in loop, we add ‘a’ to ‘res’. When value of ‘b’ becomes 1, the value of ‘res’ + ‘a’, gives us the result. 

*/
