#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, s, d;
    printf("Enter the values : \n");
    scanf("%d %d", &x, &y);
    fnOpr(x, y, &s, &d);
    printf("The results are, Sum =%d and Diff = %d", s, d);
    return 0;
}

void fnOpr(int a, int b, int*sum, int*diff)
{
    *sum = a + b;
    if (fnDiff(a,b))//nesting function
        *diff = a - b;
    else
        *diff = b - a;
}

int fnDiff(int p, int q)
{
    if (p>q)
        return(1);
    else
        return (0);
}
