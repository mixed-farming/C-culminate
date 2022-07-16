#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,sum=0,p=0,k;
    printf("Enter the binary number : ");
    scanf("%d",&n);

    do
    {
        k = n % 10;
        sum = sum + k * pow(2,p);
        p++;
        n=n/10;
    }while (n!=0);
    //Now the terminating sum of the do while loop is the decimal equivalent of the binary number.

     int remainder,octal=0,countval=1;

    do
    {
        remainder = sum % 8;
        octal += countval*remainder ;  //FYI...this is similar to octal = octal + countval*reamainder
        countval=countval*10;
        sum = sum / 8 ;
    }while (sum!=0);
        printf("%d",octal);
    return 0;
}
