#include <stdio.h>
#include <stdlib.h>


int main()
{
    const int MAX = 80; //max characters in string
    char str[MAX]; //string variable str
    printf("Enter a string: ");
    gets(str); //put string in stror use gets(str)
    printf("The string is \n");
    puts(str);
    return 0;
}
//gets(str) reads the blanck spaces(white spaces) in an array;\
whereas the scanf() function does not read the characters after the 1st white space .
