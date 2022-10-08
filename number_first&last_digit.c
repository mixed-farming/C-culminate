#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,ld;
    printf("Enter the number : ");
    scanf("%d",&n);
    ld=n%10;
    for (t=n;t>=10;)
    {
        t=t/10;
    }
    printf("first digit %d\n",t); //first digit
    printf("last digit %d\n",ld); //last digit
    return 0;
}
