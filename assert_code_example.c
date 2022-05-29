#include <stdio.h>
//#define NDEBUG
#include <assert.h>

int main()
{
    double x,y;
    while(1)//an infinite loop is set
    {
        printf("INPUT 2 FLOATING NUMBERS \n");
        scanf("%lf %lf",&x,&y);
        assert(y!=0);
        printf("On dividing 1st number by second number we get %lf\n",x/y);
    }
    return 0;
}
