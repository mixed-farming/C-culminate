#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,dig,rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    n=num;//store it for comparision
    while(n>0)
{
    dig = n % 10;
    rev = rev * 10 + dig;
    n = n / 10 ;
}
    printf("%d",rev);
    if (num == rev)
    {
        printf("\n \t GIVEN NUMBER IS A PALINDROME\n");
    }
    else
    {
       printf("\n \t GIVEN NUMBER NOT A PALINDROME\n");
    }

        return 0;
    }
