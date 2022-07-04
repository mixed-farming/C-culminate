#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[40], s2[50];
    printf("\nEnter the first string: ");
    gets(s1);
    printf("\nEnter the second string: ");
    gets(s2);
    strcat(s1, s2);
    printf("\nConcatenated string is: ");
    printf("%s",s1);
    return 0;
}
//When the function strcat is executed ,string 2 is
//appended to string 1.
//It does so by removing the null character at the end
//of string 1 and placing string 2 from there.
//The string at string 2 remains unchanged.
