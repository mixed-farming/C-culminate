#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1, var2; //two integer variables
    int *ptr; //pointer to integers
    ptr = &var1; //set pointer to address of var1
    *ptr = 37; //same as var1=37 ( Dereferencing)
    var2 = *ptr; //same as var2=var1
    printf("%d", var2); //verify var2 is 37
    return 0;
}
//* - refers to the content of the pointer ; & - refers to the address of the opertor
//note - pointer always points variable via '&' operator
//but a variable can be equated to a pointer via '*' operator
