#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number to be checked : ");
    scanf("%d",&n);

    if (CheckPowerOfTwo(n)==1)
        printf("\n%d is a power of 2\n",n);
    else
        printf("\n%d is not a power of 2\n",n);

    return 0;
}
//function body
int CheckPowerOfTwo(int x)
{
    //checks whether a number is zero or not
    if (x==0)
        return 0;
    //true till x is not equal to 1
    while (x!=1)
    {
        //checks whether a number is divisible by 2 or not
        if(x%2!=0)
            return 0;
        x/=2; //similar to x=x/2;
    }
}
