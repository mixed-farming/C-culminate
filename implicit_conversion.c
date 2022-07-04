#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=123.56;
    int n=i;//variable n has been impllicitly converted to 123 by compiler itself.
    printf("%d",n);
    return 0;
}

//implicit conversions are also called automatic type conversions.
