#include <stdio.h>
#include <stdlib.h>


int main()
{
    const int max= 100;
    char sent[max];
    int i=0;

    printf("Enter the sentence : ");
    gets(sent);

    for (i=0;sent[i]!=' ';i++)
    {
        printf("%c",sent[i]);
    }
    return 0;
}
