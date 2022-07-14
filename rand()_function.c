#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//The rand() function, declared in stdlib. h,
//returns a random integer in the range 0 to RAND_MAX (inclusive) every time you call it.

int main()
{
    char a[MAX]={'m','a','n','o','j'};
    char b;
    srand(time(0));//without this your program will create same character each time it runs.
    //srand(time(NULL)); does same job
    b=a[rand() % MAX];
    printf("%c",b);
    printf("\n\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",rand());
    }
    return 0;
}
