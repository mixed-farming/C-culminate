#include <stdio.h>
#include <stdlib.h>

int c[10][10];

int main()
{
    int i,j,m,n,p,q,a[10][10],b[10][10];
    printf("Enter the dimensions of 1st matrix : ");
    scanf("%d %d",&m,&n);
    printf("Enter the dimensions of the 2nd matrix : ");
    scanf("%d %d",&p,&q);
    if (n!=p)
    {
        printf("\nMatrices cannot be multiplied.\n");
    }
    else
    {
        printf("\nEnter the elements of 1st matrix : \n");
        Scan(m,n,a);
        printf("\nEnter the elements of 2nd matrix : \n");
        Scan(p,q,b);
        multiply(m,n,a,p,q,b,c);
        printf("\nMultiplied matrix : \n");
        for(int e=0;e<m;e++)
        {
            for(int f=0;f<q;f++)
            {
                printf("%d ",c[e][f]);
            }
            printf("\n");
        }
    }
    return 0;
}

void Scan(int x,int y,int z[10][10])
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
}

void multiply (int m1, int n1, int  a[10][10], int m2, int n2,int b[10][10], int c[10][10])
{
    static int i = 0, j = 0, k = 0;

    if (i >= m1)
    {
        return;
    }
    else(i < m1)
    {
        if (j < n2)
        {
            if (k < n1)
            {
                c[i][j] += a[i][k] * b[k][j];
                k++;
                multiply(m1, n1, a, m2, n2, b, c);
            }
            k = 0;
            j++;
            multiply(m1, n1, a, m2, n2, b, c);
        }
        j = 0;
        i++;
        multiply(m1, n1, a, m2, n2, b, c);
    }
}


