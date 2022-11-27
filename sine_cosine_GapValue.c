#include <stdio.h>
#include <stdint.h>
#include <math.h>

void PrintingSineCosine(double interval)
{
    for (double x=0; x<=1; x+=interval)
    {
        printf("\nsin(%f)=%f\t\t", x, sin(x));
        printf("cos(%f)=%f\n", x, cos(x));
    }
}

int main()
{
    double gap = 0;
    printf("Enter the desired gap between consecutive values from (0,1) : ");
    scanf("%lf", &gap);
    PrintingSineCosine(gap);

}
