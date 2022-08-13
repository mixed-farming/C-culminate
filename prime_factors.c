#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cnt;
int a[100];

int main()
{
    long n;
    int result;
    printf("Enter a number : ");
    scanf("%ld",&n);

    result=prime_factors(n);
    printf("\n%ld has %d prime factors.\n\nThey are : ",n,result);
    for(int i=0;i<result;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

int prime_factors(long n) {
    int count=0;
    int flag;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
            {
                a[count]=i;
                count++;
            }
        }
    }
    return count;
}

