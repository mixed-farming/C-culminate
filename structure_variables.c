#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        int rollno;
        int age;
        char name[20];
        float height;
    } s1;

//Assigning string:
    strcpy(s1.name,"Manoj");
//Assignment statement:
    s1.rollno=9271;
    s1.age=119;
    s1.height=5.7896;
//Reading the values into members:
    printf("The name , age , roll number , height = %s , %d years , %d , %.4f feet ",s1.name,s1.age,s1.rollno,s1.height);
    return 0;
}
