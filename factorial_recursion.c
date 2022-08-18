#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please type a number : ");
    scanf("%d", &number);
    printf("\n%d! = %d\n",number,factorial(number));
    return 0;
}

int factorial(long a)
{
    if (a==1) //base case
    return (1);
    return (a * factorial (a-1));//else condition is implied if its not written
}
