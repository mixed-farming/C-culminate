#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,key,pos=0;
    int found=0; //setting flag
    char a[100];

    printf("Enter no of numbers : ");
    scanf("%d",&n);

    printf("\n\nEnter the numbers\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]); // entered data items
    }

    printf("\n\nEnter the element to be searched : ");
    scanf("%d",&key); // data to be searched

    /*search procedure*/
    for(i=0; i<n; i++)
    {
        if(a[i]==key) // comparison
        {
            found=1;
            pos=i+1;
            break;
        }
    }
    if(found==1)
    {
        if(pos==1)
        {
            printf("\n\nData found at %dst position.\n\n",pos);
        }
        else if(pos==2)
        {
            printf("\n\nData found at %dnd position.\n\n",pos);
        }
        else if(pos==3)
        {
            printf("\n\nData found at %drd position.\n\n",pos);
        }
        else
            {
                printf("\n\nData found at %dth position.\n\n",pos);
            }
    }
    else
    printf("\n\nData is not found.\n\n");
    return 0;
}
