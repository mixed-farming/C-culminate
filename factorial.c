#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact=1,n;
    printf("Enter the number : ");  //enter the number n for which the factorial is required.
    scanf("%d",&n);
    for (i=1,fact;i<=n;i++)
        fact=fact*i;
    printf("\n%d factorial is %d\n",n,fact);
    return 0;
}
