#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[][3]={1,2,3,4,5,6,7,8,9};

    printf("The matrix is : \n\n");

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//printf("%d",a[i][j]);
//printf("  ");              is similar to printf("%d\t",a[i][j]);
