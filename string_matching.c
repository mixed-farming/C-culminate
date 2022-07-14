#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkpattern(char str[30],char sub[30])
{
    int n=strlen(str);
    int m=strlen(sub);
    int i,j,count=0,flag,flag1=0;

    for(i=0;i<(n-m);i++)
    {
        flag=1;
        for(j=0;j<m;j++)
        {
            count++;
            if(str[i+j]!=sub[j])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            flag1=1;
            printf("\n\nSubstring found at position %d in Text string\n",i+1);
        }
    }

    if(flag1==0)
    {
        printf("Substring not found\n\n");
    }

    return count;
}

int main()
{
    char str[30],sub[30];//str-text string ; sub-sub string
    printf("Enter the text string : ");
    printf("\n");
    scanf("%[^\n]%*c",str);
    printf("\nEnter the sub string : ");
    printf("\n");
    scanf("%[^\n]%*c",sub);
    int opcount=checkpattern(str,sub);
    printf("\n\nThe opcount : %d\n",opcount);
    return 0;
}
