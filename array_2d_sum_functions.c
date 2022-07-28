#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a[10][10], m, n;
    printf("Enter dimensions of matrix\n");
    scanf("%d %d", &m, &n);
    printf("\nEnter the elements\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nSum of elements of 2D array = %d\n",fn2d(a, m, n));
    return 0;
}

int fn2d(int x[ ][10], int m, int n)
{
    int i, j, sum=0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            sum+=x[i][j];
    return(sum);
}
