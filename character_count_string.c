#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int Max = 100;
    char sent[Max];
    int i=0, count=0;
    printf("enter sentence \n");
    gets(sent);
    while(sent[i]!='\0')
    {
        count++;
        i++;
    }
    printf(" \n no of characters = %d", count);
    return 0;
}

