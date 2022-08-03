#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[20],i,j,temp;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter values for an array\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0, j=n-1; i<n/2; i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nReversed array: \n");
           for(i=0; i<n; i++)
           printf("%d\t", a[i]);

return 0;
}
