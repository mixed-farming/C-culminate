#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,prime=1,j=2;
    printf("Enter the number : ");
    scanf("%d",&n);

    while (j<sqrt(n))
    {
        if (n % j == 0)
        {
           prime=0;
        break; //break out for the while loop
        }
        j++;
    }
    if (prime==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
