#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,hcf;

    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("\nEnter the second number : ");
    scanf("%d",&b);

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("\n\nThe HCF %d and %d is %d\n\n",a,b,hcf);
    return 0;
}
