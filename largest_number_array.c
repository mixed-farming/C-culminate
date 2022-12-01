#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100];

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("\nEnter the numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    printf("\n\nThe largest number in the array is %d\n\n",max);

    return 0;
}
