#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter number : ");
    scanf("%d",&n);
    printf("The factors of %d are : \n\n",n);
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        printf("\t%d\n",i);

    }
    return 0;
}
