#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100][100],temp[30];
    int no, i, j;
    printf("Enter the no of strings : ");
    scanf("%d",&no);
    printf("\nEnter the strings : \n");
    fflush(stdin);//to clear the input buffer...used mainly before 'gets'
    for(i=0; i<no; i++)
        gets(string[i]);//reading the string

    for(i=0; i<no-1; i++)
        for(j=0; j<no-i-1; j++)
        {
            if(strcmp(string[j],string[j+1])>0)
            {
                strcpy(temp,string[j]);
                strcpy(string[j],string[j+1]);
                strcpy(string[j+1],temp);
            }
        }
    printf("\nThe sorted array is : \n");
    for(i=0; i<no; i++)
        {
            puts(string[i]);
        }
    return 0;
}
