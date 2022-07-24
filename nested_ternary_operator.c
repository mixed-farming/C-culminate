#include <stdio.h>
#include <stdlib.h>

int main()
{
    int speed;
    printf("Enter your vehicle speed as an positive integer : ");
    scanf("%d",&speed);
    if (speed>=0)
        {
            speed=( (speed<=65)? (65) : (speed<=70)? (70) : (90) );
            switch(speed)
                {
                    case 65: printf("\nNo speeding ticket\n");
                    break;
                    case 70: printf("\nSpeeding ticket\n");
                    break;
                    case 90: printf("\nExpensive speeding ticket\n");
                    break;
                }
        }
    else
        printf("\nINCORRECT SPEED\n");
    return 0;
}
