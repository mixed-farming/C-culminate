#include <stdio.h>
#define NDEBUG //must be defined before assert.h for its functioning
#include <assert.h>
#include <ctype.h>

int main()
{
    assert(0);//assertion failed message will be displayed for assert(0); program runs for non-zero asserts.
    printf("Yay...my progream runs\n");
    return 0;
}
//sharp(#) defined NDEBUG flag turns off all the assertions made in the program

//It is known that function-like macro assert for debugging can be disabled with NDEBUG defined before the include of assert.h
