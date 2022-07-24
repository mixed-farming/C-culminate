//Trace is sum of principal diagonal elements of a square matrix.
//Norm is Square Root of sum of squares of elements of a matrix.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trace=0, sum=0,i,j,a[10][10];
    double norm;
    int m=3,n=3;
    printf("Enter elements for a \n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0; i<m; i++)
        trace=trace + a[i][i];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            sum=sum+a[ i][ j]*a[ i][ j ];
    }
    norm=sqrt(sum);
    printf("\n\nTrace is %d\n", trace );
    printf("\nNorm is %.15lf\n\n", norm );
    return 0;
}
