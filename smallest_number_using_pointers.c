#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,*p;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("\nPopulate the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int *pSm,*pWalk,*pLast;
    int size_of_an_element = sizeof(a)/n;
    for (pSm = a,pWalk = a+1,pLast = a + (n-1) ; pWalk<=pLast ; pWalk++)
    {
        if(*pWalk < *pSm)
        {
            pSm = pWalk;
        }
    }
    printf("\nThe smallest number in the array is : %d\n",*pSm);
    return 0;
}
