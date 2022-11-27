#include <stdio.h>
#include <stdlib.h>

void DisplayMessage(void)
{
    printf("Hello from function DisplayMessage\n");
}

int main()
{
    printf("Hello from main \n");
    DisplayMessage(); // FUNCTION CALL
    printf("Back in function main again.\n");
    return 0;
}

