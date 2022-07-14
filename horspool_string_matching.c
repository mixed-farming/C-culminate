#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int count=0;

int main()
{
    int table[126],m,n,i,j,k;//shift ascii table...ascii characters range from 33 to 126
    bool flag=false;
    char str[300],substr[75];
    printf("Enter main string : ");//text string
    scanf("%[^\n]%*c",str);
    n=strlen(str);
    printf("Enter the pattern string : ");//pattern string
    scanf("%[^\n]%*c",substr);
    m=strlen(substr);
    for(i=0; i<126; i++) //initializing the table
        table[i]=m;
    for(j=0; j<=m-2; j++) //assigning values for substr characters
        table[substr[j]]=m-1-j;
    i=m-1;//position of pattern's right end

    printf("Letters compared are : ");
    while(i<=n-1)
    {
        k=0; //no of matched characters
        int flag1=0;
        while(k<=m-1 && substr[m-1-k]==str[i-k] && ++count)
        {
            printf("%c ",str[i-k]);
            flag1=1;
            k++;
        }

        if(flag1==1&&k!=m)//to get the letter of last mismatch
        {
            printf("%c ",str[i-k]);
            count++;
        }

        if(flag1==0)//to get the letter of first mismatch
        {
            count++;
            printf("%c ",str[i]);
        }


        if(k==m)
        {
            printf("\nPattern is found at position %d on the text string.\n",i-(m-1)+1);
            flag=true;
            break;
        }
        else
            i=i+table[str[i]];
    }
    if(flag != true)
    {
        printf("\nPattern is not found in the text string.\n");
    }

    printf("\nTotal number of comparisons done = %d",count);
    return 0;
}
