#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,lcm;

    printf("enter first number(negatives not allowed) : ");
    scanf("%d",&a);

    printf("enter second number(negatives not allowed) : ");
    scanf("%d",&b);



    while (a<0)

    {
        printf("INPUT A VALID FIRST NUMBER : ");
        scanf("%d", &a);
    }
    while (b<0)

    {
        printf("INPUT A VALID SECOND NUMBER : ");
        scanf("%d", &b);

    }


    int i=1;
    while (i>0)
    {
        if (((a*i)%b)==0)
        {
        lcm = (i*a);
        printf("The lcm of %d and %d is %d",a ,b ,lcm );
        break;
        }
        else
            i++;
    }

    return 0;
}

// NOTE : A * B = HCF(A,B) * LCM(A,B) 
