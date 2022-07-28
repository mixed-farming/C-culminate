#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[20], x, y,i;
    printf("Enter the limit of array : \n");
    scanf("%d",&n);
    printf("\nEnter the values : \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe sum of array elements is = %d\n",fnSum(a,n));//
    return 0;
}

int fnSum(int a[ ], int n)
{
    int sum=0,i;
    for(i=0; i<n; i++)
        sum+=a[i];
    return (sum);
}
