#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX = 100;
    char sent[MAX];
    int i=0,count=1;
    printf("enter sentence \n");
    gets(sent);
    printf("\n");
    while(sent[i]!='\0')
    {
        if ( ( sent[i] ==' ' ) && ( sent[i+1]!=' ' ) )
            count++;
        i++;
    }
    printf("\nNumber of words =%d",count);
    return 0;
}
