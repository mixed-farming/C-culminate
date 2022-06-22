#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100];

    printf("Enter the no. of elements in the array : ");
    scanf("%d",&n);

    printf("\nEnter the array elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int sum;
    sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    int avg;
    avg=sum/n;

    printf("\n\nThe average of the elements of the array = %d\n\n",avg);

    return 0;
}
