#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    while (i<5)
{
        if (i==2||i==4)
            continue;
        if (i>2)
            break;

        printf("%d",i);
        i++;
}
    return 0;
}
