#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        c++;
        int rem=a%b;
        a=b;
        b=rem;
    }

    printf("\n\nGCD = %d",a);
    printf("\nopcount = %d",c);
    return 0;
}
