#include <stdio.h>
#include <stdlib.h>

int readNum(void); // prototype
int main()
{
    int c;
    printf("Enter a number \n");
    c=readNum();// no Arguments
    printf("The number read is %d",c);
    return 0;
}
int readNum()
{
    int z;
    scanf("%d",&z);
    return(z);//Return value
}


