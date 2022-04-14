#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[][3]={{},{1,2,3},{4,5,6},{7,8,9},{}};
    for(int i=0;i<5;i++)
    {
        if(i!=0&&i!=4)
            printf("0 ");
        else
            printf("  ");

        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }

        if(i!=0&&i!=4)
            printf("0 ");
        else
            printf("  ");
        printf("\n");
    }
    return 0;
}
