#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 0 , second = 1 , limit , next ;

    printf("Enter the limit : ") ;
    scanf("%d",&limit) ;

    printf("\t%d\t",first);

    while (second <= limit)
    {
        printf("%d\t",second);
        next = first + second ;
        first = second ;
        second = next ;

    }
    return 0;
}
