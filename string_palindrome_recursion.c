#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputString[100];
    printf("Enter a string for palindrome check\n");
    scanf("%[^\n]s", inputString);
    if(isPalindrome(inputString, 0, strlen(inputString) - 1))
    printf("\"%s\" is a Palindrome.\n", inputString);
    else
    printf("\"%s\" is not a Palindrome.\n", inputString);
    return 0;
}

int isPalindrome(char *inputString, int leftIndex, int rightIndex)
{
    /* Recursion termination condition */
     if(leftIndex >= rightIndex)
        return 1;

     if(inputString[leftIndex] == inputString[rightIndex])
{
     return isPalindrome(inputString, leftIndex + 1, rightIndex - 1);
}
     return 0;
}


