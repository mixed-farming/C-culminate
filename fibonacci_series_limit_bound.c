#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    fibFn(n); //function call
    return 0;
}

void fibFn(int lim)   //fib generation
{
    int i, first, sec, next;
    if (lim<=0)
        printf("limit should be +ve.\n");
    else
    {
         printf("\nFibonacci numbers : \n");
         first = 0, sec = 1;
         for (i=1; first<lim; i++)
          {
              printf("%d\n", first);
              next = first + sec;
              first = sec;
              sec = next;
          }
    }
}
