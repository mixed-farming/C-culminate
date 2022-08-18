#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
        char string[20];
        int asc[20];
        int n, count = 0;
        printf("Enter the no of characters present in an array : ");
        scanf("%d", &n);
        printf("\nEnter the string of %d characters : ", n);
        scanf("%s", string);
        while (count < n)
        {
            asc[count]=string[count];
            printf(" %c = %d\n", string[count], asc[count] );
            count++ ;

        }
    }
    return 0;
}
