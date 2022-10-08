#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j,prime,num;
    printf("Enter the limit : ");
    scanf("%d",&n);

    printf("The Palindromic Prime Numbers : \n");
    while (i<=n)
    {
        int prime = 1;
        int num = i ;
        j=2;
        //PRIME CHECK
        while(j<i)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
            j++;
        }
        //PALINDROME CHECK
        int dig,rev=0;
        while (num>0)
        {
            dig = num % 10;
            rev = rev * 10 + dig;
            num = num/10;
        }
        //DISPLAYING PALINDROMIC PRIME NUMBERS
        if (i!=1&&prime==1&&rev==i)
        {
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}
