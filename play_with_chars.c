#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c='a';
    printf("The ASCII value is %d\n",c);
    printf("The actual character value is %c\n",c);
    printf("The three consecutive chars are %c %c %c\n",c,c+1,c+2);
    printf("Three bell ring chars are %c %c %c\n",'\a','\a','\a');
    return 0;
}
