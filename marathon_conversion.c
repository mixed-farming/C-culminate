#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miles = 26 , yards = 385 ;
    double kilometers;
    kilometers = 1.609344 * (miles + (yards/1760));    //conversion formula
    printf("\n\nA marathon is %lf kilometers\n\n",kilometers);
    return 0;
}
