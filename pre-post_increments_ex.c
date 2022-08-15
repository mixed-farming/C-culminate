#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=99,b=99,c,d;
    c=++a;
    d=b++;
    printf("a=%d\tb=%d\tc=%d\td=%d",a,b,c,d);
    return 0;
}
//decrement operator also works in a similar kind of way. it is denoted as " i-- ".

//m=5;
//y=++m; Prefix Mode
//In this case, the value of y and m would be 6.

//m=5;
//y=m++; Postfix Mode
//Here y continues to be 5. Only m changes to 6.
