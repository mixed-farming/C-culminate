#include <stdio.h>
#include <stdlib.h>

int main()
{
    short m;
    float n;
    double o;                                      //( float = long ; double = long long ) interms of size
    long p;
    long long q;
    long double r;
    char s;
    int t;
    int expt=r+q;
    int u[100];                        //for an array , total size = size allocated * size of the data type
                                       //note that you cannot create variables of void type
    printf("size of short = %d bytes\n",sizeof(m));
    printf("size of float = %d bytes\n",sizeof(n));
    printf("size of double = %d bytes\n",sizeof(o));
    printf("size of long = %d bytes\n",sizeof(p));  //you can always check the size of variable using the "sizeof()" operator
    printf("size of long long = %d bytes\n",sizeof(q));
    printf("size of long double = %d bytes\n",sizeof(r));
    printf("size of char = %d bytes\n",sizeof(s));
    printf("size of int = %d bytes\n",sizeof(int));//instead of variable you can also use the actual data type in sizeof .
    printf("size of unsigned int and signed int = %d bytes and %d bytes respectively \n",sizeof(unsigned int),sizeof(signed int));
    printf("size of int expt = %d bytes\n",sizeof(expt));//same as int obviously :)
    printf("size of the array int u[100] = %d\n",sizeof(u));
    return 0;
}
