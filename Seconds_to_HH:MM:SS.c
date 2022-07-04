#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec,hours,minutes;

    printf("Enter time in seconds : ");
    scanf("%d",&sec);

    hours = sec/3600;
    minutes = (sec%3600)/60 ;
    sec = (sec%3600)%60;

    printf("\nTime in Hours : Minutes : Seconds : %d : %d : %d\n", hours, minutes, sec);

    return 0;
}
