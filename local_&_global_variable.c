#include <stdio.h>
#include <stdlib.h>

    int g ; /* global variable declaration */
    int main ()
    {
        int a,b;/* local variable declaration */
        a = 10 ;
        b = 20 ;
        g = a + b ;
        printf("value of a = %d, b = %d and g = %d\n",a,b,g);
        return 0;
    }
