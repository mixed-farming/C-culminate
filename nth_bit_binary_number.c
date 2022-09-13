#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    printf("Enter the bit of the binary number required : ");
    scanf("%d",&n);
    printf("%d",(num>>n)&1);
    return 0;
}
//To get the nth bit of num right shift num , n times. Then perform bitwise AND with 1 i.e. bitStatus = (num >> n) & 1
