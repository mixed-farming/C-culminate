#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=7;
    swap(&a, &b);
    printf("After swap : a = %d and b = %d\n",a,b);
    return 0;
}

void swap(int*x, int*y )
{
    int t=*x;
    *x=*y;
    *y=t;
}

// achieved using pointers
/*Call by Reference: Both the actual and formal parameters refer to the same locations, 
so any changes made inside the function are actually reflected in actual parameters of the caller.*/
