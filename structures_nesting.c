#include <stdio.h>
#include <stdlib.h>

int main()
{
    //StructureDefinition
    struct student
    {
        int rollno;
        char name[15];
        struct m marks;
    } fs[3];//3 students

    //StructureDefinition
    struct m
    {
        int sub1;
        int sub2;
        int sub3;
    };
}
/*
The members contained in the inner structure namely sub1,sub2 and sub3 can be referred to as :
fs[i].marks.sub1;
fs[i].marks.sub2;
fs[i].marks.sub3;
