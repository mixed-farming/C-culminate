#include <stdio.h>
#include <stdlib.h>

int a[100],b[100];

int main()
{
    int m,n,flag;
    printf("Enter the number of elements in the 1st array : ");
    scanf("%d",&m);

    printf("\nEnter the number of elements in the second array : ");
    scanf("%d",&n);

    if(m!=n)
    {
        printf("\n\nThe two arrays are not equal.\n");
    }

    else
    {
        printf("\n\nEnter the elements of the first array : ");
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }

        printf("\n\nEnter the elements of the second array : ");
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }

        sort(a,m);
        sort(b,n);
        printf("\nArrays after sorting : \n");
        printf("\n1st array : ");
        for(int i=0;i<m;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n\n2nd array : ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",b[i]);
        }

        flag=1;
        for(int i=0; i<m; i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            printf("\n\nThe two arrays are equal.\n");
        }
        else
        {
            printf("\n\nThe two arrays are not equal.\n");
        }
    }
    return 0;
}

void sort(int x[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(x[j]>x[j+1])//sorting in ascending order
            {
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
}
