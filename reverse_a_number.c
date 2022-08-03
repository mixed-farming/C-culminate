#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, rev=0, right_digit;
    printf("Enter your number : ");
    scanf("%d",&number);
    while ( number != 0 )
    {
        right_digit = number % 10;
        rev=rev*10 + right_digit;
        number = number / 10;
    }
    printf("The reversed number is %d",rev);
     return 0;
}
