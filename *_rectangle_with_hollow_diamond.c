#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    printf("Enter the value of side(length divided by 2) : ");
    scanf("%d",&n);

    printf("\n");
    //printing upper half of the pattern
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        for (k=1;k<=2*i-2;k++)
        {
            printf(" ");
        }
        for (j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //printing lower half of the pattern
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=2*(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
