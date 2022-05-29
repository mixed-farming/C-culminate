#include <stdio.h>
#include <stdlib.h>

void dispChar(int n, char c)//'n' and 'c' are called formal parameters
{
    printf("\n\nYou have entered %d & %c\n\n",n,c);
}

int main()  //calling program
{
    int no;
    char ch;
    printf("Enter a number & a character: \n");
    scanf("%d %c",&no,&ch);
    dispChar( no, ch);//'no' and 'ch' are called actual parameters / arguments.
    return 0;
}
