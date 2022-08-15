#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max=100;
    char str[max];
    int i=0;
    printf("Enter the string : ");
    gets(str);

    printf("\n\nInput string : ");
    puts(str);

    printf("\n\nOutput : \n");

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            printf(" ");
        }
        printf("%c",str[i]);
        i++;
    }
    printf("\n\n");
    return 0;
}
