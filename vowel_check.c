#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter the letter : ");
    scanf("%c",&c);

    if (c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
    {
    switch(c)
    {
    case 'a' :
        printf("Vowel");
        break;
    case 'e' :
        printf("Vowel");
        break;
    case 'i' :
        printf("Vowel");
        break;
    case 'o' :
        printf("Vowel");
        break;
    case 'u' :
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        }
    }
    else
        printf("ENTER ONLY LOWER CASE LETTERS");
    return 0;
}
