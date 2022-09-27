#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade ; //A character constant is always formed by enclosing the character within a pair of single quotation marks.
    int marks ;

    printf("Enter marks scored by the student : ");
    scanf("%d",&marks);

    if(marks<=100 && marks>=0)
    {
       if(marks>90)
        grade= 'A';
    else if (marks>60)
        grade= 'B';
    else if (marks>45)
        grade= 'C';
    else if (marks>35)
        grade= 'D';
    else
        grade= 'F';

    printf("grade = %c",grade);
    }
    else
        printf("MARKS CANNOT BE GREATER THAN 100 or LESS THAN 0");
    return 0;
}
