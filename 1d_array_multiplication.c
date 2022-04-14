#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100];
    int n;
    printf("(NOTE : Both arrays will have same number of elements)\nEnter the number of elements in the array : ");
    scanf("%d",&n);

    printf("\n\nEnter the elements of 1st array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\nEnter the elements of 2nd array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    //1d array multiplication
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]*b[i];
    }

    //printing the product array
    printf("\n\nProduct matrix : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n\n");
    return 0;
}
