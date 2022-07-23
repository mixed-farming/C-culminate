#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter the value for variable a : ");
    scanf("%d",&a);

    printf("\nEnter the value for variable b : ");
    scanf("%d",&b);

    (a>b)?printf("\n%d is greater than %d\n",a,b):printf("\n%d is greater than %d\n",b,a);// '?:' is called ternary operator

    return 0;
}

/*The ternary operator is an operator that takes three arguments.
The first argument is a comparison argument, the second is the result upon a true comparison,
and the third is the result upon a false comparison.
Ternary operator is shortened way of writing an if-else statement */
