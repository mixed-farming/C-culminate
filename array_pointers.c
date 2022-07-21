#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    int *p;
    p = &a[5];

    printf("%d %d %d %d \n",*a,*p,p[-1],p[1]);
    printf("%d",++(*p));
    return 0;
}
