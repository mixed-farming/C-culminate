#include <stdio.h>
#include <stdlib.h>

int *smallest(int *x,int *y)
{
    return(*x < *y ? x : y);
}

int main()
{
    int a,b;
    int *p;
    printf("Enter two numbers for comparison : \n");
    scanf("%d %d",&a,&b);

    p = smallest(&a,&b);
    printf("\nThe smallest number is %d.\n",*p);
    return 0;
}
