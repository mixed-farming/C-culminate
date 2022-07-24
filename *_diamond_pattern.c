/*

input = 5 returns

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter diameter of diamond : ");
    scanf("%d", &rows);

    stars = 1;
    spaces = rows - 1;

    /* Iterate through rows */
    for(i=1; i<=rows*2-1; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");

        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");

        /* Move to next line */
        printf("\n");

        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    return 0;
}
