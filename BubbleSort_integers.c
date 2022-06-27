#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,a[100],swap_count=0;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter the elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\nThe bubble sorted array looks like : \n\n");
    for(i=0; i<n-1; i++) //pass
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1]) // comparison...NOTE : for descending order just replace '>' by '<'
            {
                // interchange
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap_count++;
            }
        }

        printf("\n\nAfter Pass %d : ",i);
        for(int k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    }



    printf("\n\nTotal number of swaps undergone is equal to %d\n",swap_count);
    printf("\n");
    return 0;
}
