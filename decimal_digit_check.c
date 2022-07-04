#include <stdio.h>
#include <stdlib.h>

int main()
{
 char c;
 int isDigit;

 printf("Enter a Character : ");
 scanf("%c", &c);

 /* Check, If input character is digit */
 isDigit = ((c >= '0') && (c <= '9'))? 1 : 0;

 switch (isDigit)
 {
 case 1:
 printf("\n%c is Decimal Digit Character\n", c);
 break;

 case 0:
 printf("\n%c is Not a Digit Character\n", c);
 break;
 }
 return 0;
}
