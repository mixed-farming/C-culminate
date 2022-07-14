#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,small,a[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("\nPopulate the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,n);
    small=smallest(a,n);

    printf("\nThe smallest element in the array = %d\n\n",a[0]);
    return 0;
}

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int smallest(int a[],int n)
{
    int x=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
        }
    }
    return x;
}

