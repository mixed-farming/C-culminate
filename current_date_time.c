#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    time(&t);
    printf("Manoj M Mallya\nTime : %s\n\n",ctime(&t));
    return 0;
}
