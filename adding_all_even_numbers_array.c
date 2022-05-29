#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[20], i;
    printf("Enter the limit \n");
    scanf("%d",&n);
    printf("\nEnter the values: \n");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\nThe sum of even array elements is = %d\n",Add(a,n));
    return 0;
}

int Add( int a[ ], int n)
{
    int sum=0,i;
    for(i=0; i<n; i++)
    {
        if((a[i]%2) == 0)
            sum+=a[i];
    }
    return (sum);
}
