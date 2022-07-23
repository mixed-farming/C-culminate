#include <stdio.h>
#include <stdlib.h>



int main()
{
    typedef int marks;
    marks x;
    printf("Enter the marks obtained by student out of 50 : ");
    scanf("%d",&x);
    x=x*2;
    printf("Percentage of marks obtained by the student is equal to %d",x);
    return 0;
}
