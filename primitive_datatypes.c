#include <stdio.h>
#include <stdlib.h>

void main()

{
    int a=1;
    float b=2;
    double c=3;
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%lf\n",c);

    //special kinds of scannings in scientific notations:-
    float i=3219.6548;
    printf("%e\n",i);
    printf("%E\n",i);
    int j=60000;
    printf("%g\n",j);
    printf("%G\n",j);
}
