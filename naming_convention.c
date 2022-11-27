#include <stdio.h>
#include <stdlib.h>

//input: Manoj Mallya
//output: Manoj M.

int main()
{
    char str[100];
    int i=0;
    printf("Enter the string : ");
    gets(str);

    printf("\n\nOutput : ");
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            printf(" %c.",str[i+1]);
            break;
        }
        else
        {
            printf("%c",str[i]);
        }
        i++;
    }
    printf("\n\n");
    return 0;
}
