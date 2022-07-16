#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,rem,ecnt=0,ocnt=0;// ecnt - even digit counts ; ocnt - odd digit counts .
    printf("Enter the number : ");
    scanf("%d",&num);
    n = num ;
    do
    {
        rem = num % 10;
        num = num / 10;
        if(rem%2==0)
            ecnt++;
        else
            ocnt++;
    }
    while(num>0);
    printf("%d has %d even digits & %d odd digits",n,ecnt,ocnt);
    return 0;
}
