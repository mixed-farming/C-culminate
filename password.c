#include <stdio.h>
#include <stdlib.h>

int main()
{
     int roll_number = 14;
     int password = 7973;
        printf("Please enter your roll number : ");
        scanf("%d", &roll_number);
        switch (roll_number) {
            case 14:
                printf("\nEnter your password : ");
                scanf("%d", &password);
                switch (password) {
                    case 7973:
                        printf("\nWelcome Dear Programmer :)\n");
                        break;
                    default:
                        printf("\nincorrect password :(\n");
                        break;
                }
                break;
            default:
                printf("\nincorrect roll number :(\n");
                break;
        }
    return 0;
}
