#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,b,h,i,j,k,a[10][10][10];
    printf("Enter the length of the 3D array : ");
    scanf("%d",&l);
    printf("Enter the breadth of the 3D array : ");
    scanf("%d",&b);
    printf("Enter the height/no.of layers in the 3D array : ");
    scanf("%d",&h);

    printf("\nYour array has %d rows,%d columns and %d layers.\n",l,b,h);
    printf("Thus there are %d elements in this 3D array.\n",l*b*h);
    printf("Populate the array : ");

    for(k=0;k<h;k++)
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("\nYour 3D array looks like this : \n\n");
    for(k=0;k<h;k++)
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("a[%d][%d][%d] = %d\n",i,j,k,a[i][j][k]);
            }
        }
    }

    printf("\nYour 3-dimensional number block looks like this : \n\n");
    for(k=0;k<h;k++)
    {
        printf("Layer number %d:\n",k+1);
        for(i=0;i<l;i++)
        {
            for(j=0;j<b;j++)
            {
               printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
