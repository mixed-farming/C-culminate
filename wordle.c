//yet to add dictionary with rand()

#include <stdio.h>
#include <stdlib.h>

char a[]="watch";//hard-coded

int main()
{
    int i;
    char b[100];
    char title[]="WELCOME TO WORD-DARE";
    printf("%100s",title);
    printf("\n\nEnter your first guess of the word : ");
    scanf("%s",b);
    if(strcmp(a,b)==0)
    {
        printf("\nGENIUS!!!...That's correct\nYou won :)\n\n");
    }
    else
    {
        checkpoint(b);
        //does the word exist in dictionary
        printf("\nEnter your second guess of the word : ");
        scanf("%s",b);
        if(strcmp(a,b)==0)
        {
            printf("\nMAGNIFICENT!...That's correct\nYou won :)\n\n");
        }
        else
        {
            checkpoint(b);
            printf("\nEnter your third guess of the word : ");
            scanf("%s",b);
            if(strcmp(a,b)==0)
            {
                printf("\nIMPRESSIVE!...That's correct\nYou won :)\n\n");
            }
            else
            {
                checkpoint(b);
                printf("\nEnter your fourth guess of the word : ");
                scanf("%s",b);
                if(strcmp(a,b)==0)
                {
                    printf("\nSPLENDID!...That's correct\nYou won :)\n\n");
                }
                else
                {
                    checkpoint(b);
                    printf("\nEnter your fifth guess of the word : ");
                    scanf("%s",b);
                    if(strcmp(a,b)==0)
                    {
                        printf("\nGREAT!...That's correct\nYou won :)\n\n");
                    }
                    else
                    {
                        checkpoint(b);
                        printf("\nEnter your last guess of the word : ");
                        scanf("%s",b);
                        if(strcmp(a,b)==0)
                        {
                            printf("\nPHEW!...That's correct\nYou won :)\n\n");
                        }
                        else
                        {
                            printf("\n\n:(\tCORRECT ANSWER : %s\n\n",a);
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void checkpoint(char b[])
{
    int i,j,flag=1;
    for(i=0; i<5; i++)
    {
        if(b[i]==a[i])
        {
            printf("\nThe letter %c is in the word and in the correct spot.\n",b[i]);
        }
        else
        {
            flag=0;
            for(j=0; j<5; j++)
            {
                if(b[i]==a[j])
                {
                    flag=1;
                    printf("\nThe letter %c is in the word but in the wrong spot.\n",b[i]);
                    break;
                }
            }

            if(flag==0)
            {
                printf("\nThe letter %c is not in the word in any spot.\n",b[i]);
            }
        }
    }
}
