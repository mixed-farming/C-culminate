#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,*p,**q,***r;
    p = &a;
    q = &p;
    r = &q;

    printf("Enter a value : ");
    scanf("%d",&a);

    //other options to scan the value are :
    //scanf("%d",p);
    //scanf("%d",*q);
    //scanf("%d",**r);

    printf("\nValue of the number  = %d,%d,%d,%d\n",a,*p,**q,***r);
    printf("\nAddress of the number location = %p,%p,%p,%p\n",&a,p,*q,**r);
    printf("\nAddress of the 1st pointer = %p,%p,%p\n",&p,q,*r);
    printf("\nAddress of the 2nd pointer = %p,%p\n",&q,r);
    printf("\nAddress of the 3rd pointer = %p\n",&r);
    return 0;
}
