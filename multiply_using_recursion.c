#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, result;
    printf("Enter two numbers to find their product: \n");
    scanf("%d %d", &a, &b);
    result = product(a, b);
    printf("\n%d * %d = %d\n", a, b, result);
    return 0;
}

int product(int a,int b)
{
    if (a < b)
    {
        return product(b, a);
    }
    else if (b != 0)
    {
        return (a + product(a, b -1));
    }
    else
    {
        return 0;
    }
}
