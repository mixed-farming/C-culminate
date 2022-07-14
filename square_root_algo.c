#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,res,i,temp;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        temp=i*i;
        if(temp>n)
        {
            res=i-1;
            break;
        }
    }

    printf("Square root = %d",res);
    return 0;
}
