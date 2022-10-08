#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
    printf("Enter the limits : ");
    scanf("%d-%d",&m,&n);

    i=m;
    while(i<=n)
    {
        int prime=1, j=2;
        while(j<i)
        {
            if( i% j == 0)
            {
                prime=0;
                break; /* break out of inner loop */
            }
            j++;
        }
        if (prime == 1&&i!=1) printf("%d\t",i);
        i++;
    }
    return 0;
}
