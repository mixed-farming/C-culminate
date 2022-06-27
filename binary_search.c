#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n,key,mid,arr[100];

    printf("Enter the number of numbers in the array : ");
    scanf("%d",&n);

    int high=n-1,low=0;

    printf("\nEnter the numbers[in ascending order] :\n");
    for(i=0; i<n; i++) //reading the elements
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element to be searched : ");//getting the element to be searched
    scanf("%d",&key);

    //binary search
    do
    {
        mid=(low+high)/2 ;
        if ( key < arr[mid] )
            high = mid -1;
        else if ( key > arr[mid])
            low = mid + 1;
    }while(key!=arr[mid] && low <= high);//till here

    if(key==arr[mid])//result printing
    {
        printf("\n\nSUCCESSFUL SEARCH :)\n\n");
    }
    else
    {
        printf("\n\nSEARCH FAILED :(\n\n");
    }

    return 0;
}
