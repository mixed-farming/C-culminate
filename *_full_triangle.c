#include <stdio.h>
#include <stdlib.h>

/*

for n=5, output will be

    *
   ***
  *****
 *******
*********

*/

int main()
{
    int i,j,k=0,n;
    printf("Enter the height of the pyramid : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        while (k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}
