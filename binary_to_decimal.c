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
        printf("THE GIVEN BINARY NUMBER IS EQUAL TO %d IN DECIMAL SYSTEM",sum);

    return 0;
}
