#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Reversed number is %d", rev(num));
    return 0;
}

int rev(int num)
{
    static int n = 0;
    if(num > 0)
        n = (n* 10) + (num%10) ;
    else
        return n;
    return rev(num/10);
}
