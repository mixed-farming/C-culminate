#include <stdio.h>
#include <stdlib.h>

float find_sqrt(int n)
{
    int mid,start=0,end=n;
    float ans;

    while(start<=end)//finding integral part
    {
        mid=(start+end)/2;

        if(mid*mid==n)
        {
            ans=mid;
            break;
        }

        if(mid*mid < n)
        {
            ans = start;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    //finding fractional part
    float increment=0.1;
    for(int i=0;i<5;i++)
    {
        while (ans*ans < n)
        {
            ans += increment;
        }

        //loop terminates when ans*ans>n
        ans -= increment;
        increment /= 10;
    }

    return ans;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Square root of %d is %f",n,find_sqrt(n));
    return 0;
}
