#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j,a[100],count=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("\nPopulate the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the key value : ");
    scanf("%d",&k);

    printf("\nPairs which add to %d are : ",k);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==k)
            {
                printf("(%d,%d) ",a[i],a[j]);
                count++;
            }
        }
    }

    if(count==0)
    {
        printf("No such pair exists.");
    }

    printf("\n\n");
    return 0;
}
