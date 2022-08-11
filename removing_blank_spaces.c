#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max= 100;
    char sent[max];
    int i=0;

    printf("Enter the sentence : ");
    gets(sent);

    printf("The array after the changes : ");

    for(i=0; sent[i]!='\0'; i++)
    {
        if(sent[i]==' ')
        {
            continue;
        }
        else
        {
            printf("%c",sent[i]);

        }
    }
    return 0;
}
