#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4 == 0)
    {                               //A leap year is exactly divisible by 4 except for century years (years ending with 00)
        if( year%100 == 0)          // The century year is a leap year only if it is perfectly divisible by 400.
        {
            if ( year%400 == 0)
                printf("\n%d is a leap year\n",year);
            else
                printf("\n%d is not a leap year\n",year);
        }
        else printf("\n%d is a leap year\n",year);
    }
    else
        printf("\n%d is not a leap year\n",year);
    return 0;
}
//simplest if statement for the check would be
//if((year%4==0)&&(year%100!=0)||(year%400==0)
