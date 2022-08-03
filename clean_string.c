#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[150];
    int i,j;
    printf("Input the string :");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') || (str[i]=='\0') || (str[i]==' ')))
        {
            for(j=i; str[j]!='\0'; j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("Output String : %s", str);
    return 0;
}
