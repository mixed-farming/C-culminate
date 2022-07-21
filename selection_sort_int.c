#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,pos,small,a[100];

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i= 0; i< n-1; i++) // loop for number of pass
    {
        pos = i;
        small = a[i];
        for(j=i+1; j<n; j++) //loop for searching the smallest
        {
            if(small > a[j]) // finding the smallest
            {
                pos = j; // pos for interchanging
                small = a[j]; // assigning current small value
            }
        }
        a[pos] = a[i]; //interchanging values
        a[i] = small;
    }

    printf("\n\nThe selection sorted array looks like : \n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");

    return 0;
}
