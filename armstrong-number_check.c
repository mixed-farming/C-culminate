#include <stdio.h>                       //condition for a number to be Armstrong
#include <stdlib.h> 
#include <math.h>                         //summation(cubes of the digits of the number) = number i.e. Σ(cubes of digits)= number
                                         //example : 3^3 + 7^3+ 1^3 = 371
int main()
{
    int n,sum=0,k,num ;
    printf("Enter the number : ");
    scanf("%d",&n);
    num = n;
    do
    {
       k = n % 10;
       sum = sum + pow(k,3);
       n=n / 10;
    }while(n!=0);

    if (num==sum)
    {
        printf("\n%d IS AN ARMSTRONG NUMBER\n",num);
    }
    else
        printf("\n%d IS NOT AN ARMSTRONG NUMBER\n",num);
    return 0;
}
