#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,x,y;
    printf("The quadratic equation is of the form ax^2+bx+c=0\n\n");

    printf("Enter a : ");
    scanf("%lf",&a);

    printf("Enter b : ");
    scanf("%lf",&b);

    printf("Enter c : ");
    scanf("%lf",&c);

    double d = (b*b)-(4*a*c);

    x = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    y = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);

    if(d<0)
        printf("Roots are imaginary");
    else
        printf("The two roots of the quadratic equation are x=%lf and y=%lf",x,y);

    return 0;
}
