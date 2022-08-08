#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],*ptr[10],n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }

    display(ptr,n);
    rotate(ptr,n);
    display(ptr,n);
    return 0;
}

void display(int *ptr[],int n)
{
    printf("The array elements are : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*ptr[i]);
        printf("\n");
    }
}

void rotate(int *ptr[],int n)
{
    ptr[n-1]=ptr[0];// we just alter the pointers pointing to array elements without touching the array elements.
    display(ptr,n);
    for(int i=0;i<n-1;i++)
    ptr[i]++;
}
