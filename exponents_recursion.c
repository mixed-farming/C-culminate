#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, powerRaised, result;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number : ");
    scanf("%d",&powerRaised);
    result = power(base,powerRaised);
    printf("%d^%d = %d", base, powerRaised, result);
    return 0;
}

int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}
