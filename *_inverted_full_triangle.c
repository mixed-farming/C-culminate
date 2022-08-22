#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print

*********
 *******
  *****
   ***
    *
    
*/

int main()
{
    int i,j,k=0,n;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");

        for(k=1;k<=2*n-2*i+1;k++)
            printf("*");

        printf("\n");
    }
    return 0;
}
