#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,sum=0;
    float N,mean;
    printf("Enter the position till where the sum and mean are required : ");
    scanf("%f",&N);

    while  (n<=N)
    {
        sum=sum+n ;
        n++;
    }
    mean = sum/N ;
    printf("SUM = %d\n",sum);
    printf("MEAN = %f",mean);
    return 0;
}
