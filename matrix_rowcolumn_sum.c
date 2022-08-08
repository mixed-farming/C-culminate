#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    int a[10][10];
    int rowsum[10], colsum[10];
    printf("Enter dimension for Matrix a \n");
    scanf("%d %d",&m,&n);

    //Reading
    printf("Enter elements for Matrix a \n");
    for (i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        scanf("%d", &a[i][j]);
        }

    //Row sum
    for(i=0;i<m;i++)
    {
    rowsum[i]=0;
    for(j=0;j<n;j++)
    rowsum[i]=rowsum[i]+a[i][j];
    }


    //Column sum
    for(j=0;j<n;j++)
    {
    colsum[j]=0;
    for(i=0;i<m;i++)
    colsum[j]=colsum[j]+a[i][j];
    }

    printf("\n");

    //Display
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        printf("\t%d",a[i][j]);
        printf("\t-->");
        printf("%d\n",rowsum[i]);
        }

    int k=0;
    while(k<n)
    {
        printf("\t|");
        k++;
    }

    printf("\n");

    int p=0;
    while(p<n)
    {
        printf("\tv");
        p++;
    }

    printf("\n");

    for(i=0;i<n;i++)
    printf("\t%d",colsum[i]);

    printf("\n");
    return 0;
}
