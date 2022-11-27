#include <stdio.h>
#include <stdlib.h>

//input: manoj mallya
//output: m. mallya

int main()
{
    char str[100];
    int i=0;

    printf("Enter the string : ");
    gets(str);

    printf("\n\nOutput : ");
    while(str[i]!=' ')
    {
        if(i==0)
        {
            printf("%c.",str[i]);
        }
        i++;
    }
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

    printf("\n\n");
    return 0;
}
