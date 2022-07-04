#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[100][100],flag=1;
    printf("Enter dimension : \n");
    scanf("%d %d",&m,&n);
    if(m!=n)
        printf("\n\nIT IS NOT A SQUARE MATRIX\n\n");
    else
    {
        printf("\nEnter elements : \n");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i][j]!=-a[j][i])
                {
                    flag=0;
                    if(flag==0)
                        break;
                }
            }
        }

        if(flag==1)
        {
            printf("The matrix is skew symmetric");
        }
        else
        {
            printf("The matrix is not skew symmetric");
        }
    }
                return 0;
}
