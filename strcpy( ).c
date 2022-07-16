#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[ ] = "Tiger, tiger, burning bright\n"
                   "In the forests of the night";
    const int MAX = 80; //size of str2 buffer
    char str2[MAX]; //empty string
    strcpy(str2, str1); //copy str1 to str2
    printf("%s",str2);//display str2
    return 0;
}
