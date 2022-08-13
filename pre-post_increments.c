#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=0,z=3;
    if((x++)&&(++y||(z%x==0)))
        printf("%d",x+y+z);
    else
        printf("%d",x+y+z+1);
    return 0;
}

//ans : 6 aftering executing if condition
