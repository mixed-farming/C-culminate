/*

input=5 returns

*
**
***
**
*

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter the length of the base of the triangle : ");
    scanf("%d",&n);

    printf("\n");
    int star=1;

     if(n%2==1)
    {
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=star; j++)
            {
                printf("*");
            }
            if(i<=n/2)
            {
                star++;
            }
            else
            {
                star--;
            }
            printf("\n");
        }
    }
    else
    {
        printf("INPUT AN ODD NUMBER");
    }


    return 0;
}
