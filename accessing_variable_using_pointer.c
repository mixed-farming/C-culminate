#include <stdio.h>
#include <stdlib.h>


int main()
{
    int var1 = 11; //two integer variables
    int var2 = 22;
    int *ptr; //pointer to integer
    ptr = &var1;//pointer points to var1
    printf("%d",*ptr); //print contents of pointer (11)
    ptr = &var2; //pointer points to var2
    printf("\n%d",*ptr); //print contents of pointer (22)
    return 0;
}
//thus we can keep on changing the variable the pointer points
