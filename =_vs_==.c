#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=22;
    if (x==10)
        printf("true\n");
    else
        printf("false\n");//it gives the correct answer that is false as we have used the equal to (==) operator
    int y=56;
    if (y=24)
        printf("true\n");
    else
        printf("false\n");//it gives true as the answer as we have used the assignment(=) operator so the compiler takes new y value as an initiation
         return 0;        //y=24 is a valid expression. y=24 will assign 24 to y and will return value of y(24).
                          //Since 24 is non-zero it is true. Hence the expression is true and will execute true part.
                          //You can change y=24 to y=0 and check

}
