#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
    label:
        {
            printf("Hello , world!\n");
            goto getout;
        }
    if(a==5)
    {
	  printf("Yo there\n");
        goto label;
    }
    
    getout:
    printf("Out of the goto loop!\n");
    return 0;
}
