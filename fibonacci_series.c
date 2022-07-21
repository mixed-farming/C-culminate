#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));//recursive call
    }
}

int main()
{
    int num,i;
    printf("Enter the number of terms to be printed in the fibonacci series : ");
    scanf("%d", &num);
    printf("\n\nFibonacci series : \n\n");
    for (i=0; i<num; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}
