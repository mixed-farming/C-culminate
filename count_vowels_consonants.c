#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max= 100;
    char sent[max];
    int i=0,count1=0,count2=0;//count 1-evens ; count 2-odds

    printf("Enter the sentence : ");
    gets(sent);

    for(i=0;sent[i]!='\0';i++)
    {
        if(sent[i]=='a'||sent[i]=='e'||sent[i]=='i'||sent[i]=='o'||sent[i]=='u')
        {
            count1++;
        }
        else if(sent[i]!=' ')
        {
            count2++;
        }
    }

    printf("\n\nThe no.of vowels and consonants in the sentence are %d and %d respectively.\n\n",count1,count2);

    return 0;
}
