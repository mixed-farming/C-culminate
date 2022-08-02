#include <stdio.h>
#include <stdlib.h>
#include <math.h> //The math.h header file defines various mathematical functions and 1 micro.All functions available in this...
                  //...take double as an argument and return double as the result.This header file includes exp,log,hyperbolic...
                  //... ,modulo(remainder value),trigonometric functions,fabs(absolute value),ceil,floor etc
int main()
{
    int n;
    printf("enter the number for which that ordered root is required : ");
    scanf("%d",&n);
    double a, result1,result2,result3,result4 ;

    printf("enter number : ");
    scanf("%lf", &a);

    result1 = sqrt(a);
    result2 = cbrt(a);
    result3 = exp(log(a)/4); //while using exp & log kind of functions do not forget to include the math.h header file.
    result4 = exp(log(a)/n);

    printf("Square root of %.5f = %.15lf\n",a, result1); //we use ".k%lf" in printf function to print k decimal digits
    printf("Cube root of %.5lf = %.15lf\n",a, result2);   
    printf("Fourth root of %.5lf = %.15lf\n",a, result3);
    printf("%dth root of %.5lf = %.15lf\n",n,a, result4);

    return 0;
}
