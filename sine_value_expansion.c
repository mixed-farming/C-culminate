#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    int n,term,i;
    float x,sum,no;
    no=x;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the angle : ");
    scanf("%f",&x);

    x = x*PI/180.0; // degrees to radians conversion
    term = x; // first term value
    sum = x; //term stored in sum
    for (i=1; i<=n; i++) //compute & sum for second term onwards
    {
        term = term*(((-1)*x*x)/(2*i*(2*i+1)));
        sum += term;
    }
    printf("Library value of Sin(%.2f) = %.2f ", no, sin(x));
    printf("\nSin (%.2f) = %.2f", no, sum);
    return 0;
}
