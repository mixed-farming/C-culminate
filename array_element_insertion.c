#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i, pos, ele;
    printf("Enter the number of elements in the array : ");
    scanf ("%d",&n );// number of elements
    printf("\nEnter the elements of array : \n");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("\nEnter the element and position of insertion : \n");
    scanf("%d %d",&ele,&pos);
    for(i=n ; i>=pos ; i--)//shift the elements to right
   {
    a[i]=a[i-1];
   }
    a[pos-1]=ele;//ele is inserted at the specified pos.
    n=n+1;//increment the count of no of elements
        printf("\n\nThe array after the insertion would be : \n\n");
        for(i=0;i<n;i++)
            printf("%d \n",a[i]);
    return 0;
    }
