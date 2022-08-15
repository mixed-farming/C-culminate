#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1=11;
    int var2=22;
    int var3=33;

//printing the values of the variable
    printf("%d\n",var1);
    printf("%d\n",var2);
    printf("%d\n",var3);

//print the addresses of these variables
    printf("%X\n",&var1);//uppercase(X) just prints address's letters in uppercase
    printf("%x\n",&var2);//%x just prints the hexadecimal type of the address which can also be replaced by %d to get the decimal type
    printf("%d\n",&var3);
    return 0;
}
//NOTE : even if we change the value of the variable its address remains the same as the compiler which had arranged the space \
for it at the beginning remains the same throughout.
