#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns : \n");
    scanf("%d %d", &r, &c);
// Assigning elements to the matrix
    printf("\nEnter matrix elements :\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
// Displaying the matrix
    printf("\nEntered matrix : \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d\t", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
// Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
// Displaying the transpose of matrix a
    printf("\nTranspose of the matrix : \n");
    for (i = 0; i < c; ++i)//we should exchange the row and columns when we take transpose of a matrix
        for (j = 0; j < r; ++j)
        {
            printf("%d\t", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
