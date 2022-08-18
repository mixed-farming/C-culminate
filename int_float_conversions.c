#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1=123.125, f2;
    int i1, i2= -150;
    i1 = f1;    //float to integer conversion
    printf("float assigned to int produces %d\n", i1);
    f2 = i2;    //integer to float conversion;
    printf("integer assigned to float produces %d\n",f2);
    printf("integer assigned to float produces %f\n",f2);
    i1=i2/100;  //integer divided by integer
    printf("integer divided by integer produces %d\n",i1);
    f1=i2/100.0;//integer divided by a float
    printf("integer divided by 100.0 produces %f\n",f1);
    return 0;
}
