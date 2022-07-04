#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, arr[10][10],m,n,count=0,flag=0;
    printf("Enter the dimensions of the matrix : \n");
    scanf("%d %d",&m,&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&arr[i][j]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }

    if(count>(m*n)/2)
    {
        printf("THE GIVEN MATRIX IS SPARSE");
    }
    else
    {
        printf("THE GIVEN MATRIX IS NOT SPARSE");
    }
    return 0;
}
