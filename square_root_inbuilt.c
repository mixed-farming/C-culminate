#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    double square_roots;

    // the function sqrt expects a double data type argument so we convert int to a double.

    printf("square roots of numbers from 1 to 100 are : \n\n");

    for  (a=1 ;a<=100; a++)
    {
        square_roots = sqrt(a);

        printf("\t sqrt(%d)=%lf \n" ,a , square_roots);
    }
    return 0;
}
