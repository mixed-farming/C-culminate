#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstvalue=7, secondvalue=9;
    int *p1, *p2;
    p1 = &firstvalue; // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    *p1 = 10; // value pointed by p1 = 10
    *p2 = *p1;// value pointed by p2 = value pointed by p1
    p1 = p2;// p1 = p2 (value of pointer is copied...now both the pointers point at the secondvalue)
   // *p1 = 20; // value pointed by p1 = 20
    printf("firstvalue is %d\n", firstvalue);
    printf("secondvalue is %d",secondvalue);
           return 0;
}
