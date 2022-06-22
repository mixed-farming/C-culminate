#include <stdio.h>
#include <windows.h>

int main()
{
  int freq, dur; // Declare the variables
  printf("Enter the frequency (HZ) and duration (ms): ");
  scanf("%d %d", &freq, &dur);
  Beep(freq, dur);  // Beep.

  return 0;
}
