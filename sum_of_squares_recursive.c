#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    printf("Sum = %d",summate(n));
    return 0;
}

int summate(int n)
{
    static int sum=0;
    if(n==1)
        return sum+1;
    else
    {
        sum+=n*n;
        return(summate(n-1));
    }
}
