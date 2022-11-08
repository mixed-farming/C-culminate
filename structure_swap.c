//swapping the contents of two strcutures using a temporary structure

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int t;
    char c;
}process;

int main()
{
    process a,b,temp;
    a.t=5;
    a.c='M';
    b.t=6;
    b.c='A';
    printf("Before swap : %d %c\t%d %c",a.t,a.c,b.t,b.c);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap : %d %c\t%d %c",a.t,a.c,b.t,b.c);
    return 0;
}


