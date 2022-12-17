#include <stdio.h>

/*

input n = 5
output: 

* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * *

*/

int main()
{
    int n;
    printf("Enter the dimension of the mesh : ");
    scanf("%d",&n);
    n*=2;
    
    printf("\n");
    for(int i=0;i<n/2;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                printf("*");
                else
                printf(" ");
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                printf(" ");
                else
                printf("*");
            }
        }
        
        printf("\n");
    }
    return 0;
}
