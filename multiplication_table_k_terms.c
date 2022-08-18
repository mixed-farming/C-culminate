#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j,product;
    printf("ENTER THE NUMBER OF NUMBERS : ");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d",&k);

    for (i=1;i<=k;i++)
    {
        for (j=1;j<=n;j++)
        {
            product = i * j;
            printf("%d*%d=%d\t", j, i, product);
        }
        printf("\n");
    }
    return 0;
}
