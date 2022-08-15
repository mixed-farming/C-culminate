#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,p=0,repeat=0,a[100],b[100],c[100],flag=0;

    printf("Enter the number of elements in 1st array : ");
    scanf("%d",&m);
    printf("\nEnter the elements : \n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the number of elements in 2nd array : ");
    scanf("%d",&n);
    printf("\nEnter the elements : \n");
    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }

    printf("\nINTERSECTION OF TWO ARRAYS : \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                repeat=0;
                for(int k=0; k<p; k++)
                {
                    if(c[k]==b[j])
                    {
                        repeat=1;
                        break;
                    }

                }
                if (repeat==0)
                {
                    c[p]=b[j];
                }
                p=p+1;
            }
        }
    }


    for (i=0; c[i]!='\0'; i++)
        printf("%d",c[i]);

    return 0;
}
