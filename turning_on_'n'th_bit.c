#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int k;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\nWhich bit do you wish to turn off? : ");
    scanf("%d",&k);

    printf("\nResult after turning off the required bit : %d\n",turnon(n,k));
    return 0;
}

int turnon(int n,int k)
{
    if(k<=0)
        return n;
    return(n | (1<<(k-1)));
}

