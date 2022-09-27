#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks ;
    char grade;
    printf("Enter the marks scored by the student : ");
    scanf("%d",&marks);

    if (marks%10==0)
{

    switch(marks)
    {
        case 100://here you are supposed to enter marks which are multiples of 10 only!!!
        case 90:
        case 80:
        grade='A';
        break;
        case 70:
        case 60:
        grade='B';
        break;
        case 50:
        grade='C';
        break;
        case 40:
        grade='D';
        break;
        default: grade='F';
        break;
        }
        printf("%c",grade);
}
    else
        printf("ENTER THE MARKS SUCH THAT IT IS A MULTIPLE OF 10");
    return 0;
}
