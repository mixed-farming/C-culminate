#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value to get the sum : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        static int sum=0;
        sum+=i;
        printf("\nSum of first %d natural numbers is %d\n",i,sum);
    }

    return 0;
}
