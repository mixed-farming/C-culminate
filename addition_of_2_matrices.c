#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, p, q, a[10][10], b[10][10], c[10][10];
        printf("Enter dimension for Matrix a\n");
        scanf("%d %d",&m,&n);
        printf("Enter dimension for Matrix b\n");
        scanf("%d %d",&p,&q);
        if (m!=p||n!=q)
        {
        printf("\nCANNOT ADD THE MATRICES AS THEY ARE OF DIFFERENT DIMENSIONS\n");
        exit(0); }
        //Reading the elements
        printf("Enter elements for Matrix a \n");
        for (i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        printf("\nEnter elements for Matrix b \n");
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        scanf("%d", &b[i][j]);
        //Addition
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
        //Display
        printf("\nThe final matrix is :\n");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
        }
    return 0;
}
