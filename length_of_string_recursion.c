#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int count;
    printf("Enter any string :: ");
    scanf("%s", str);
    count = length(str, 0);
    printf("The length of string = %d.\n",count);
    return 0;
}

int length(char str[], int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }
    return (1 + length(str, index + 1));
}

//length of string can be non-recursively obtained by strlen() function defined in string.h header file.
