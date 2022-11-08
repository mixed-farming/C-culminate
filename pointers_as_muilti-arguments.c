#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, s, d;
    printf("Enter two numbers : \n");
    scanf("%d %d",&x, &y);
    fnOpr(x, y, &s, &d);
    printf("Sum = %d & Diff = %d ", s, d);
    return 0;
}

void fnOpr(int a, int b, int*sum, int*diff)
{
    *sum = a + b;
    *diff = a - b;
}
