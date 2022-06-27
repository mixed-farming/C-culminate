#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[20],n,i,index,start=0,end,element;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    end = n;
    printf("Enter array elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&element);
    index = binarySearch(x,element,start,end-1);
    if(index == -1)
        printf("Element Not Found.\n");
    else
        printf("Element found at index : %d\n",index);
    return 0;
}

int binarySearch(int x[],int element,int start,int end)
{
    int mid,noOfElements,i;
    mid = (start+end)/2;
    if(start > end)
        return -1;
    if(x[mid] == element)
        return mid;
    else if(x[mid] < element)
    {
        start = mid+1;
        return binarySearch(x,element,start,end);
    }
    else
    {
        end = mid-1;
        return binarySearch(x,element,start,end);
    }
}
