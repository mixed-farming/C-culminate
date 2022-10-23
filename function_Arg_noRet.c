#include <stdio.h>
#include <stdlib.h>

void dispPattern(char ch); // prototype
int main()
{
    printf("function to display a line of patterns\n");
    dispPattern('#');//Arguments
    dispPattern('*');
    dispPattern('@');
    return 0;
}
void dispPattern(char ch)//no Return value
{
    for (int i=1; i<=30 ; i++)
        printf("%c",ch);
}
