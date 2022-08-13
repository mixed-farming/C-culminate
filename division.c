#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, quotient;

    printf("Enter first number : ");
    scanf("%f",&n1);

     printf("Enter second number : ");
    scanf("%f",&n2);

    if(n1==0&&n2==0)
    printf("-NAN\n");
    else if(n2==0)
    printf("INF\n");
    else
    {
        quotient=n1/n2;
        printf("The quotient obtained after division is %f", quotient);
    }
    return 0;
}
