#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometers,miles;
    printf("enter distance in miles : ");
    scanf("%f", &miles);
    kilometers = miles * 1.609344;
    printf("The distance in kilometers would be %f", kilometers);
    return 0;

}
