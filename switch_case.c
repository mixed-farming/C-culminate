#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3;

    switch(a)
    {
    case 2:
        printf("cat\n");
        //break ;
    case 3:
        printf("puppy\n");
       // break ;
    default:
        printf("rabbit\n");
    }
    return 0;
}
