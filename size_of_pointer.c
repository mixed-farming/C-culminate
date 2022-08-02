#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    char *q;
    long double *r;

    printf("%d\n%d\n%d\n",sizeof(p),sizeof(q),sizeof(r));
    return 0;
}

//The size of pointer depends only on our computer systems.
