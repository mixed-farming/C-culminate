#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    i=a;
    a=b;
    b=i;
    printf("\nFirst number after interchanging is %d",a);
    printf("\n\nSecond number after interchanging is %d\n",b);
    return 0;
}
