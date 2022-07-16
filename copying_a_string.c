#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[ ] = "Manipal Institute of Technology";
    const int MAX = 80; //size of str2 buffer
    char str2[MAX]; //empty string
    int j=0;
    for(j=0 ; j<strlen(str1); j++) //copy strlencharacters
        {str2[j] = str1[j];} // from str1 to str2
    str2[j] = '\0'; //insert NULL at end
    printf("%s\n",str2);//display str2
    return 0;
}
