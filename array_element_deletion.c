#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,pos,a[100];
    printf("Enter the number of numbers : ");
    scanf("%d",&n);
    printf("\nEnter the numbers : \n");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("\nEnter the position of the element to be deleted\n");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];//shift the elements to left
    }
    n=n-1;//decrement the count of no of elements
    printf("\nThe modified array : \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
