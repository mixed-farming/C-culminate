#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print

*****
****
***
**
*

*/

int main()
{
    int i,j,n;
    printf("Enter the height of the inverted pyramid : ");
    scanf("%d",&n);

    printf("\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
