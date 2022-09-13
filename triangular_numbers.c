#include <stdio.h>
#include <stdlib.h>

int main()
{
          //nth triangular number is the sum of first n natural numbers.
    int N;//It can be also obtained using the formula nth triangular number = {N*(N+1)}/2
    printf("Enter the position for which the triangular number is required : ");
    scanf("%d",&N);
    int number=0;
    int i=1;

    while (i<=N)
    {
        number=number+i;
        i++;
    }
    printf("%d",number);

    return 0;
}
