#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numerator;
    int denominator;
} FRACTION;

FRACTION getFr();
FRACTION multFr( FRACTION fr1, FRACTION fr2);
FRACTION printFr(FRACTION result);

int main()
{
    FRACTION fr1, fr2, res;
    printf("write fraction in the form of x/y : \n");
    printf("Fraction 1 : ");
    fr1= getFr();
    printf("\nFraction 2 : ");
    fr2 = getFr();
    res = multFr(fr1, fr2);
    printf("\nResulting fraction : ");
    printFr(res);
    printf("\n");

    return 0;
}

FRACTION getFr()
{
    FRACTION fr;

    scanf("%d/%d", &fr.numerator, &fr.denominator);
    return fr;
}

FRACTION multFr(FRACTION fr1, FRACTION fr2)
{
    FRACTION res;
    res.numerator = fr1.numerator * fr2.numerator;
    res.denominator = fr1.denominator * fr2.denominator;
    return res;
}

FRACTION printFr (FRACTION res)
{
    printf("%d/%d", res.numerator, res.denominator);
}

