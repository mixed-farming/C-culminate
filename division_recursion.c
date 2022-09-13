#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers for division : \n");
    scanf("%d %d", &a,&b);
    printf("\n%d/%d=%d\n",a,b,divide(a,b));
    return 0;
}

int divide(int a, int b)
{
    if(a-b < 0)
    {
        return 0;
    }
    else if (a-b==0)
    {
        return 1;
    }
    else
    {
        return divide(a-b, b)+1;
    }
}
