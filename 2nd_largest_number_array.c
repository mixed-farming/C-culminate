#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100];

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int largest1=a[0],largest2=a[1];

    for (i=1;i<n;i++)
    {
        if(a[i]>=largest1)
        {
            largest2=largest1;
            largest1=a[i];
        }
        else if(a[i]>largest2)
        {
            largest2=a[i];
        }
    }

    printf("\n\nThe second largest element of the array is %d\n\n",largest2);

    return 0;
}
