#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter numbers to be added\n");
    scanf("%d %d",&a,&b);
    c=fnAdd(a,b);//Arguments
    printf("Sum is %d",c);
    return 0;
}

int fnAdd(int x, int y)
{
    int z;
    z=x+y;
      return(z);//Return value
}
