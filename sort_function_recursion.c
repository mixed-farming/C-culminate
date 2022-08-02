#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,i,a[100],list[100];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array looks like : ");
    sortR(list[n], n-1);
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

int sortR(int list[], int ln)
{
    int i, tmp, min;
    if (ln == 1)
        return 0;
    /* find index of smallest no */
    min = 0;
    for(i = 1; i < ln; i++)
        if (list[i] < list[min])
            min = i;
    /* move smallest element to 0-th element */
    tmp = list[0];
    list[0] = list[min];
    list[min] = tmp;
    /* recursive call*/
    return sortR(&list[1], ln-1);
}

