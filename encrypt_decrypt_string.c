#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max=200;
    char sent[max];
    int i;

    printf("Enter the sentence : ");
    gets(sent);

    //encrypting
    for(i=0;sent[i]!='\0';i++)
    {
        sent[i]=sent[i]+1;
    }
    printf("\nThe encrypted string is %s\n",sent);

    //decrypting
    for(i=0;sent[i]!='\0';i++)
    {
        sent[i]=sent[i]-1;
    }
    printf("\nThe decrypted string is %s\n",sent);

    return 0;
}
//BE CAREFUL::: sent[i]=sent [i+1] is not similar to sent[i]=sent [i]+1\
the first one gives the next element in the array\
the second one is adding 1 to whatever value obtained in sent[i]
