#include <stdio.h>
#include <stdlib.h>

//Structure Definition
struct marks
{
    int total;
    int sub[3];
};

int main()
{
    struct marks student[3] = {{0,45,47,49},
        {0,43,44,45},
        {0,46,42,43}
    };
    int i, j ;
//students total
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
            student[i].total+=student[i].sub[j];
    }
    printf("Grand Total of each student:");
    for(i=0; i<=2; i++)
        printf("\nTotal of student[%d]= %d", i, student[i].total);
    return 0;
}
