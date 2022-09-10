#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int n,nth_digit,position,k,temp;
    printf("Enter a number : ");
    scanf("%lld",&n);
    temp=n;
    printf("Enter the position of the digit required : ");
    scanf("%lld",&position);
    k=floor(log10(n))+1;
    for (int i=0;i<k-position;i++)
    {
        n=n/10;
    }
    nth_digit=n%10;
    printf("The number from right end is %lld\n",nth_digit);
    for (int i=0;i<position-1;i++)
    {
        temp=temp/10;
    }
    nth_digit=temp%10;
    printf("The number from left end is %lld",nth_digit);
    return 0;
}
