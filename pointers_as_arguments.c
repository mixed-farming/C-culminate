#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
    change(&x);
    printf("x after change = %d",x);
    return 0;
}

int change (int*p)
{
    *p = *p + 10 ;
    return 0;
}
