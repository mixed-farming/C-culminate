#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int result;

    printf("enter first number : ");
    scanf("%d",&a);

    printf("enter second number : ");
    scanf("%d",&b);

    printf("enter third number : ");
    scanf("%d",&c);

    printf("enter fourth number : ");
    scanf("%d",&d);

    result = a*b+c*d;//precedence
    printf("%d\n",result);

    result = a*(b+c*d);//associativity
    printf("%d\n",result);

    return 0;
}
