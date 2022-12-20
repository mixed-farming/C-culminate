//Three numbers equality and inequality check

#include <stdio.h>

int main()
{
    //INEQUALITY check to be done for all three components
    int a,b,c;
    a=2;
    b=3;
    c=4;
    if(!(a==b || b==c ||c==a))//OR if((a!=b)==(b!=c)==(c!=a))
    printf("a,b,c are not equal to each other.");
    else
    printf("Atleast two of a,b,c are equal.");
    
    //EQUALITY check is sufficient for only two components
    int x,y,z;
    x=7;
    y=7;
    z=7;
    if(!(x!=y || y!=z))
    printf("\nx,y,z are equal.");
    else
    printf("\nAtleast two of x,y,z are not equal.");
    return 0;
}
