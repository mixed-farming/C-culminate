#include <stdio.h>

/*

Basically prints the letter 'M' with specified number of rows
input = 5
output:

    *       *
   * *     * *
  *   *   *   *
 *     * *     *
*       *       *

*/

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    
    int length=2*n+(n-1)+(n-2);//number of nodes
    int p=n,q=2*n+(n-2);//first_pointer,second_pointer
    int s=0;//space_equivalence
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=length;j++)
        {
            if(j+s==p||j-s==p||j+s==q||j-s==q)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        s++;
    }
    return 0;
}
