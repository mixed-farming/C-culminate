#include <stdio.h>
#include <stdlib.h>

int main ()
{
    struct Student
    {
        int rollno;
        int age;
    }s1={18,24},s2;
    s2=s1;//assigning one structure to another
    printf("check %d",s2.age);
    return 0;
}
