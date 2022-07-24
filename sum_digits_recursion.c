#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,sum;
    printf("Enter a positive integer number : ");
    scanf("%d",&number);
    sum=sumDigits(number);
    printf("Sum of all digits are : %d\n",sum);
    return 0;
}

int sumDigits(int num)
{
    static int sum=0;
    if(num>0)
    {
        sum+=(num%10);
        sumDigits(num/10);
    }
    else
    {
        return sum;
    }
}
