#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0,n,sum=0,flag=1;
    char word[1000];
    printf("Enter the word(only 1) : ");
    scanf("%s",word);

    for(i=0;i<strlen(word);i++)
    {
        if(word[i]!= ' ')
        {
            if (word[i]>='A' && word[i]<='Z')
            {
                sum = sum + upper_case(word[i]);
            }
            else if (word[i]>='a' && word[i]<='z')
            {
                sum = sum + lower_case(word[i]);
            }
            else
            {
                printf("\nENTER A PROPER WORD WITHOUT ANY SPECIAL CHARACTERS\n");
                flag=0;
            }
        }
    }

    if(flag==1)
        {
            printf("\nThe sum of the given word = %d\n",sum);
        }
    return 0;
}

void upper_case(char a)
    {
        a = a - 64;
        return (a);
    }

void lower_case(char a)
    {
        a = a - 96;
        return(a);
    }

