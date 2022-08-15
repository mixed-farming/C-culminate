#include <stdio.h>
#include <stdlib.h>
//PRINTING RIGHT ANGLED TRIANGLE PATTERN

/*rows=5,symbol='*' will print

*
**
***
****
*****

*/
int main()
{
    int rows,i=1,j;
    char ch;

    printf("Enter the symbol to be printed ");
    scanf("%c",&ch);

    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    printf("\nPrinting Right Angled Triangle \n\n");
    while(i<=rows)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        i++;
    }
    return 0;
}
