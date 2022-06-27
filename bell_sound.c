#include <stdio.h>
#include <conio.h>

int main()
{
  while(getch() != 27) // Loop until ESC is pressed (27 = ESC)
    printf("\a");  // Beep sound is heard when you press any key
  return 0;
}
