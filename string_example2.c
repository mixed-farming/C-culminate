#include <stdio.h>
#include <stdlib.h>

int main()
{
    char greeting[]="Hello";
    char yourname[80];
    printf("Enter your name : ");
    gets(yourname);
    printf("%s %s",greeting,yourname);
    return 0;
}
