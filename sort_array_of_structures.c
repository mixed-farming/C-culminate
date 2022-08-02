#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct
    {
    char name[10];
    int roll_no;
    }student;

    int n,i,j;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    student stuary[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter student roll number : ");
        scanf("%d",&(stuary+i)->roll_no);
        printf("Enter student name : ");
        scanf("%s",(stuary+i)->name);
    }

    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((stuary+j)->roll_no>(stuary+j+1)->roll_no)
                {
                    student temp = stuary[j];
                    stuary[j] = stuary[j+1];
                    stuary[j+1] = temp;
                }
        }
    }

    printf("\n\nSorted structure : \n");
    for(i=0;i<n;i++)
    {
        printf("Roll no : %d -> %s\n",(stuary+i)->roll_no,(stuary+i)->name);
    }
    return 0;
}
