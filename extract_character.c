#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX = 100;
    char sent[MAX];
    int len;
    printf("enter sentence \n");
    gets(sent);
    len = strlen(sent);
    printf("%d\n",len);//prints the length of the string
    printf("%c\n",sent[len-1]);//prints the last letter of the string (as \0 ->the escape sequence would be the last character.
    printf("%c\n",sent[0]);//prints the first letter of the string
    return 0;
}
