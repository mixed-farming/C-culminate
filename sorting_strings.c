#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50][20],temp[20];
    int i,j,n;

    printf("Enter the number of names : ");
    scanf("%d",&n);

    printf("\nEnter the names : \n");

    fflush(stdin);

    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }

    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp (a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("\nThe sorted order is : \n");
    for(i=0;i<n;i++)
    puts(a[i]);
    return 0;
}
