#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, p, q;
    int a[10][10], b[10][10],c[10][10];
    printf("Enter dimension for a \n");
    scanf("%d %d",&m,&n);
    printf("\nEnter dimension for b \n");
    scanf("%d %d", &p,&q);
    if(n!=p)
    {
        printf("\nNOT MULTIPLICABLE\n");
        exit(0); // Terminate the execution
    }
    printf("\nEnter elements for a \n");
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements for b\n");

    for(i=0; i<p; i++)
    for(j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }

    //Matrix multiplication requires three nested loops.The outer loop traverses the m rows of matrix a.For each row of i ,another loop must cycle though the q columns of matrix b.For each column, form the sum of the products of corresponding elements from row i of matrix a and column j of matrix b.
        for(i=0; i<m; i++)
        for(j=0; j<q; j++)
        {
            c[i][j]=0;
            for(int k=0; k<n; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
        }
        printf("\nThe product matrix is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            printf("%d\t",c[i][j]);
            printf("\n");
        }

    return 0;
}
