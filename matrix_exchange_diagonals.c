#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, arr[10][10],n;
    printf("Enter the dimension of square matrix : ");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i==j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][n-i-1];
                arr[i][n-i-1]=temp;
            }
    printf("\nModified Matrix : \n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           printf(" ");
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
