#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print

*********
 *     *
  *   *
   * *
    *

*/

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    printf("\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*n-2*i+1;k++)
        {
            if(i==1||k==1||k==2*n-2*i+1)
               {
                   printf("*");
               }
            else
               {
                   printf(" ");
               }
        }
        printf("\n");
    }

    return 0;
}
