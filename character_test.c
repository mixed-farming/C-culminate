#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if (ch>= 'a' && ch<= 'z')
    {
        printf("lowercase char\n");
    }
    else if (ch>= 'A' && ch<= 'Z')
    {
        printf("uppercase char\n");
    }
    else if (ch>= '0' && ch<= '9')
    {
        printf("digit char\n");
    }
    else
        printf("special char\n");
    return 0;
}
