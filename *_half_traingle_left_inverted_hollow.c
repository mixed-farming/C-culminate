#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print

*****
*  *
* *
**
*

*/

int main()
{
    int i,j,n;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&n);

    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(i==1||j==n||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
