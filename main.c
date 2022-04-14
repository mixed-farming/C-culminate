#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantity,*p,n;//2 int variables & 1 integer pointer
    quantity=50;//assigns value 50 to quantity
    p=&quantity;//assigns the address of quantity to p
    n= *(*(&p));//contains the indirection operator *
    printf("%d",n);
    return 0;
}
//* and & are the inverse operators. they cancel each other.
