#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    c=(a=0,b=3);//the comma operator
    printf("%d\n",c);//first c=0 then its changed to 3
    return 0;
}
