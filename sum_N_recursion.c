#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("The sum is %d",fnSum(n));
    return 0;
}

int fnSum(int x)
{
    if (x == 1) //base case
        return 1;
    else
        return (x + fnSum(x-1)) ; //recursive case
}
