#include <stdio.h>
#include <stdlib.h>

void disp_pattern(void); // prototype

int main()
{
    printf("function to display a line of stars\n");
    disp_pattern();//no Arguments
    return 0;
}

void disp_pattern(void)//no Return value
{
    int i;
    for (i=1; i<=20 ; i++)
        printf("*");
}
