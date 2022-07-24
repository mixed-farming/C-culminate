#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter the string : ");
    gets(string);
    printf("The length of the string is %d",strlen(string));//prints the length of the string.
    return 0;
}
