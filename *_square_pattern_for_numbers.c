#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*n=5 will print

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5 

*/

int main()
{

    int n;
    scanf("%d", &n);
    int size=n*2-1;
    int start=0;
    int end=size-1;//because size starts from 0
    int a[size][size];
//start and end just keep track of the matrix rows and columns
    while(n!=0)
    {
        for (int i=start; i<=end; i++)
        {
            for (int j=start; j<=end; j++)
            {
                if (i==start||j==start||i==end||j==end)//check for row,column,end_row,end_column
                    a[i][j]=n;//assigning value n
            }
        }
        start++;
        end--;
        n--;// decrement n
    }

    printf("\n");
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
