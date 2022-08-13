#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sign;
    printf("Please type in a number: ");
    scanf("%d",&number);
    if ( number < 0 )
        sign = -1;
    else if ( number == 0 )
        sign = 0;
    else // Must be positive
        sign = 1;
    printf("Sign = %d", sign);
    return 0;
}
