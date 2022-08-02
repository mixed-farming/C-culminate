#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265
int main()
{
    double interval;
    int i;
    for(i = 0; i <= 90; i++)
    {
        interval = i;
        printf("sin( %lf ) = %lf \t\t cos( %lf ) = %lf \n", interval, (sin(interval*pi/180)),interval, (cos(interval*pi/180)));
    }
    return 0;
}
