#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i,n=0,flag=0;
    printf("Enter the string : ");
    gets(string);
    for(i=0; string[i]!='\0'; i++)
        n++;//you get the length of the string i.e. "n"
    for(i=0; i<n/2; i++)
    {
        if(string[i]!=string[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("\nIt is a palindrome!");
    else
        printf("\nIt is not a palindrome!");
    return 0;
}
