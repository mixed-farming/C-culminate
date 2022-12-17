#include <stdio.h>

/*

input:
arm=2
n=3

output:

*
 *
  *
 *
*
*
 *
  *
 *
*
*
 *
  *
 *
*

*/

int main()
{
    int arm,n;
    printf("Enter the length of the zig/zag arm : ");
    scanf("%d",&arm);
    printf("Enter the number of zig-zag fragents : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int space=0;
        for(int j=0;j<=2*arm;j++)
        {
            if(j<arm)
            {
                for(int k=0;k<space;k++)
                printf(" ");
                
                printf("*\n");
                space++;
            }
            else
            {
                for(int k=0;k<space;k++)
                printf(" ");
                
                printf("*\n");
                space--;
            }
        }
    }
    return 0;
}
