#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int count;
    printf("Enter a positive integer number : ");
    scanf("%d",&number);
    count=countDigits(number);
    printf("Number of digits is : %d\n",count);
    return 0;
}

int countDigits(int num)
{
    static int count=0;
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
