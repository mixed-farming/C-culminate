#include <stdio.h>
#include <stdlib.h>

/*

n=5 will print

* *
* *
* * * *
* * * *
* * * * * *
* * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * * * *
* * * * * * * * * *

*/

int main()
{
    int s,n,k,i,g,j;
    printf("Enter number of steps : ");
    scanf("%d",&s);
    n=s*2;

    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        k = (i%2==1) ? i+1 : i ;// k is set to i+1 for every i and i+1

        for(j=1; j<=k; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
