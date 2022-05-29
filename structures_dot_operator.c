#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct studentinfo
    {
    char name[20];
    int roll_number ;
    char branch[10];
    char gender;
    }s1,s2;

    strcpy(s1.name, "manoj mallya");
    s1.roll_number = 9271;
    strcpy(s1.branch, "COMP");
    s1.gender = 'M';
    printf("The student is ");
           switch (s1.gender)
           {
               case 'F':
                   printf("Mrs. ");
               break;
               case 'M':
                   printf("Mr. ");
               break;
        }
           printf("%s \n", s1.name);
    return 0;
}
