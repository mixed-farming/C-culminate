#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, arr[10][10],n,sumU=0,sumL=0;//U-upper triangular elements , L-lower triangular elements
    printf("Enter the dimension of square matrix : \n");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                sumL+=arr[i][j];
            }
            else if(j>i)
            {
                sumU+=arr[i][j];
            }
        }
    }

    printf("\n\nTHE SUM OF UPPER TRIANGULAR ELEMENTS IS %d",sumU);
    printf("\n\nTHE SUM OF LOWER TRIANGULAR ELEMENTS IS %d\n\n",sumL);
    return 0;
}
