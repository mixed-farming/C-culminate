#include <stdio.h>

/*

input n=9
output:

    *       *     
  *   *   *   * 
*       *       *

*/

int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    
    printf("\n");
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
