#include <stdio.h>
#include <stdlib.h>
//atoi() is a function in C that converts a string into an integer numerical representation
//it is found in stdlib.h

int main()
{
    char a[20]="9 273";
    int n;
    n=atoi(a);
    printf("%d",a);
    return 0;
}
