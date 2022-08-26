#include <stdio.h>
#include <stdlib.h>

/*

for n=5 it wiil print

*
**
* *
*  *
*****

*/

int main()
{
    int i,j,n;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==n||j==1||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
