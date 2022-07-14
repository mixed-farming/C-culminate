#include <stdio.h>
#include <stdlib.h>

int gcd(int m,int n)
{
    int i,opcount=0;
    for(i=(m>n)?n:m ; i>0 ; i--)
    {
        opcount++;
        if(m%i==0 & n%i==0)
            break;
    }
    printf("\n\nGCD of %d and %d is %d\n",m,n,i);
    return opcount;
}

int main()
{
    int m,n;
    printf("Enter the two numbers : ");
    scanf("%d %d",&m,&n);

    int opcount=gcd(m,n);
    printf("The opcount is %d",opcount);
    return 0;
}
