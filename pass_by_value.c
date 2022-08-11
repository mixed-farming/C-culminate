#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=7;
    swap(a, b);
    printf("After swap: a= %d and b= %d\n",a,b);
    return 0;
}

void swap(int x, int y )
{
    int t=x;
    x=y;
    y=t;
    printf("In function: x= %d and y=%d\n",x,y);
}

/*Call By Value: In this parameter passing method, 
values of actual parameters are copied to function’s formal parameters and the two types of parameters are stored in different memory locations. 
So any changes made inside functions are not reflected in actual parameters of the caller.*/
