#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, arr[10][10],m,n,c1,c2,r1,r2;
    printf("Enter the dimensions of the matrix : \n");
    scanf("%d %d",&m,&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);

    /*column exchange
    printf("\nEnter the columns to be exchanged : \n");
    scanf("%d %d",&c1,&c2);
    for(i=0; i<m; i++)
    {
        temp=arr[i][c1-1];
        arr[i][c1-1]=arr[i][c2-1];
        arr[i][c2-1]=temp;
    }*/

    //row exchange
    printf("\nEnter the rows to be exchanged : \n");
    scanf("%d %d",&r1,&r2);
    for(j=0; j<n; j++)
    {
        temp=arr[r1-1][j];
        arr[r1-1][j]=arr[r2-1][j];
        arr[r2-1][j]=temp;
    }

   printf("\nMATRIX AFTER THE CHANGES : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            {
                printf(" ");
                printf("%d",arr[i][j]);
            }
        printf("\n");
    }
    return 0;
}
