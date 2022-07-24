/*

input = 5 returns

*****
*****
*****
*****
*****

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter the length of side of the square : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
