#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

sample output : 

ENTER YOUR GENDER (m/f) : m

*THINK OF THE PERSON YOU LOVE THE MOST
PUT HER INFRONT OF YOUR IMAGINARY VISION*

On a scale of 1-10 how much do you love that person (1 being least loving and 10 being most loving)? : 10


I LOVE YOU VERY VERY VERY VERY VERY VERY VERY VERY VERY VERY VERY MUCH.


      *******           *******
    ***********       ***********
   *************     *************
  ***************   ***************
 ***************** *****************
 ***************** *****************
*************************************
*************************************
*************************************
 ***********************************
  *********************************
   *********            **********
    ******** I LOVE YOU *********
     *******            ********
      *************************
       ***********************
        *********************
         *******************
          *****************
           ***************
            *************
             ***********
              *********
               *******
                *****
                 ***

*/

int main()
{
    int repeat=0;
    char gender;

    printf("ENTER YOUR GENDER (m/f) : ");
    scanf("%c",&gender);
    while(gender!='m'&&gender!='f')
    {
        printf("Enter valid gender : ");
        scanf("%c",&gender);
    }

    if(gender=='m')
        {
            printf("\n*THINK OF THE PERSON YOU LOVE THE MOST\nPUT HER INFRONT OF YOUR IMAGINARY VISION*\n\n");
        }
    else if(gender=='f')
        {
            printf("\n*THINK OF THE PERSON YOU LOVE THE MOST\nPUT HIM INFRONT OF YOUR IMAGINARY VISION*\n\n");
        }

    printf("On a scale of 1-10 how much do you love that person (1 being least loving and 10 being most loving)? : ");
    scanf("%d",&repeat);

    printf("\n\nI LOVE YOU VERY");

    while(repeat>0){
        printf(" VERY");
        repeat--;
    }

    printf(" MUCH.\n\n\n");

    //printing the heart pattern
    int size=9;
    char* message = " I LOVE YOU ";
    int n = strlen(message);

    int print_line = 4;

    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= 4 * size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));

            if (dist1 < size + 0.5 || dist2 < size + 0.5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int x = 1; x < 2 * size; x++)
    {
        for (int y = 0; y < x; y++)
            printf(" ");

        for (int y = 0; y < 4 * size + 1 - 2 * x; y++)
        {
            if (x >= print_line - 1 && x <= print_line + 1)
            {
                int idx = y - (4 * size - 2 * x - n) / 2;
                if (idx < n && idx >= 0)
                {
                    if (x == print_line)
                        printf("%c", message[idx]);
                    else
                        printf(" ");
                }
                else
                    printf("*");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
