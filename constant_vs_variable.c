#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
    a=4;
    printf("%d",a);
    const int b=9;
    //b=8;//this gives an error as constant's value can't be altered
    printf("\n%d",b);
    return 0;
}
