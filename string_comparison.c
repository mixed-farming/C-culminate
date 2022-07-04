#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100];
    char str2[100];
    int diff;

    printf("Enter string 1 : ");
    gets(str1);

    printf("Enter string 2 : ");
    gets(str2);

    diff=strcmp(str1,str2);

    printf("%d",diff);

    return 0;
}
//strcmp has only 3 outputs {-1,0,1}
//if str1>str2 then output=1
//if str1=str2 then output=0
//if str1<str2 then output=-1
