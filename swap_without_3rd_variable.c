#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("\nEnter second number : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nFirst number after interchanging : %d",a);
    printf("\n\nSecond number after interchanging :%d \n",b);
    return 0;
}
