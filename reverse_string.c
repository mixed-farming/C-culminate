#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[70];
    char temp;
    int i, n=0;
    printf("\nEnter the string:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        n++;
    for(i=0; i<n/2; i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("\nReversed string is:");
    puts(str);
    return 0;
}
