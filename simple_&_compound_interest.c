#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,q,r,SI,CI;
    int n;
    printf("Enter the value of Principal p = ");
    scanf("%f",&p);
    printf("Enter the value of Rate r = ");
    scanf("%f",&r);
    printf("Enter the value of Period in year n = ");
    scanf("%d",&n);
    SI_CI(&p,&r,&n,&SI,&CI);
    printf("\nSimple Interest SI=%f \n",SI);
    printf("Compound Interest CI=%f \n",CI);
    return 0;
}

void SI_CI(float *pr, float *ra, int *yr, float *smp, float *cmp)
{
    int amount;
// Simple interest
    *smp= ((*pr)*(*ra)*(*yr)/100);
// Compound interest
    amount= (*pr)*pow((1 +(*ra)/100),(*yr));
    *cmp= amount-(*pr);
}
