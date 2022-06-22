#include <stdio.h>
#include <stdlib.h>
#define pi 3.14152
int main()
{
    float radius;
    double area;
    printf("enter radius of the circle : ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("area of the circle with radius %f is %lf",radius ,area);
    return 0;
}
