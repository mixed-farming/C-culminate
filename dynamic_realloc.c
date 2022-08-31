#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,n,m,i;
    printf("Enter the size : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));

    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\n\nDisplaying first %d elements : ",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }

    printf("\nEnter the new size : ");
    scanf("%d",&m);
    ptr = (int *)realloc(ptr,m*sizeof(int));

    printf("\nEnter the remaining elements : ");
    for(i=n;i<m;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\n\nDisplaying all the %d elements : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",ptr[i]);
    }

    return 0;
}
