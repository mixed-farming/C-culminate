#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n,lim,sum,dig;
    printf("Enter the limit : ");//Limit is such that all the Armstrong numbers less than the limit gets printed.
    scanf("%d",&lim);

    n=1;
    do
    {
        sum = 0;
        num = n;
        do
        {
            dig = num%10;
            sum = sum+pow(dig,3);
            num = num/10;
        }
        while(num>0);
        if(sum == n)
            printf("%d\n",n);
        n++;
    }while(n<lim);
    return 0;
}
