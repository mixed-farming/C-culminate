#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter the number : ");
    scanf("%i",&i);
    if  (i%2==0)
        printf("%i is an even number",i);
    else
        printf("%i is an odd number",i);

    return 0;
}
