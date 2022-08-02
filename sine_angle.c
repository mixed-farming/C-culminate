/*SINE Function in C Programming*/

#include <stdio.h>
#include <math.h>

int main()
{
  double sinValue, number;
  printf(" Please Enter the Value to calculate Sine :  ");//entered value is taken in radians
  scanf("%lf", &number);

  sinValue = sin(number);

  printf("\n The Sine value of %lf = %f ", number, sinValue);

  return 0;
}
