#include <stdio.h>
#include <stdlib.h>

static int count=0;

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        count++;
        return fibo(n-1)+fibo(n-2);
    }

}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("%dth fibonacci number is %d",n,fibo(n-1));
    printf("\n\nThe opcount : %d\n\n",count);
    return 0;
}
