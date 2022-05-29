#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10], c[10],n, m, i;
    printf("Enter no. of numbers in first array : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)//first array reading
    scanf("%d",&a[i]);
    printf("Enter no of numbers in second array : ");
    scanf("%d",&m);

    for(i=0; i<m; i++)//second array reading
    scanf("%d",&b[i]);
    if(m==n)
    {

    for(i=0; i<m; i++)//addition
    c[i]=a[i]+b[i];
    printf("Sum of given array elements\n");
    for(i=0; i<n; i++)
    printf("%d\n",c[i]);
    }
    else
    printf("SORRY...CANNOT ADD :(");
    return 0;
            }
