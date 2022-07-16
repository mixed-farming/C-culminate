#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\t\t\t\t\t\t\t\t\t*SIMPLE CALCULATOR*");
    double a,b;
    char o='+';
    while(1)
    {
        printf("\n\nWhat operation do you wanna perform?\nEnter the character given in their respective bracket\n$ to break\n\n");
        printf("->Addition (+)\n->Subtraction (-)\n->Multiplication (*)\n->Division (/)\n");
        printf("->Exponentiation (^)\n\n");
        fflush(stdin);
        scanf("%c",&o);
        if (o=='$')
        {
            exit(0);
        }
        printf("\n\nEnter first number : ");
        scanf("%lf",&a);
        printf("\n\nEnter second number : ");
        scanf("%lf",&b);
        switch(o)
        {
        case '+' :
            printf("\nRESULT :\n%lf + %lf = %lf",a,b,a+b);
            break;
        case '-' :
            printf("\nRESULT :\n%lf - %lf = %lf",a,b,a-b);
            break;
        case '*' :
            printf("\nRESULT :\n%lf * %lf = %lf",a,b,a*b);
            break;
        case '/' :
            printf("\nRESULT :\n%lf / %lf = %lf",a,b,a/b);
            break;
        case '^' :
            printf("\nRESULT :\n%lf ^ %lf = %lf",a,b,pow(a,b));
            break;
        default :
            printf("\nEnter proper symbol.\n\n");
            break;
        }
    }

    return 0;
}
