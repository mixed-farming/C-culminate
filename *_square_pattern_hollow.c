#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print 

*****
*   *
*   *
*   *
*****

*/

int main()
{
    int i,j,n;
    printf("Enter the side of square : ");
    scanf("%d",&n);

    printf("\n");

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
                {printf("*");}
            else
                {printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
