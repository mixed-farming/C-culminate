#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k,product;
    printf("Enter the number for which the table is required : ");
    scanf("%d",&n);
    printf("Enter the number of terms in the table : ");
    scanf("%d",&k);

    for (i=1;i<=k;i++)
    {
        product = n * i ;
        printf("%d * %d = %d\n",n,i,product);
    }
    return 0;
}
