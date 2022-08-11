#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20],sent[80],ch;
    scanf("%c",&ch);
    scanf("%s",str);
    scanf("\n");
    scanf("%[^\n]%*c",sent);

    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s",sent);
    return 0;
}

/*In order to take a line as input, you can use scanf("%[^\n]%*c", s);
 where  is defined as char s[MAX_LEN] where  is the maximum size of .
 Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
 Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.*/
