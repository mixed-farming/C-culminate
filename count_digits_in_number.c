#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,count;//variable declartion

    printf("Enter the number : ");
    scanf("%d",&n);

    num=n;

    for (count=0 ; n!=0 ; count++)
    {
        n=n/10;
    }

    printf("The number of digits in %d is %d",num,count);
    return 0;
}
