#include <stdio.h>
int main()
{
	char SUM[50];
	int a = 10, b = 20, c;
	c = a + b;
	sprintf(SUM, "Sum of %d and %d is %d", a, b, c);

	// The string "sum of 10 and 20 is 30" is stored
	// into SUM instead of printing on stdout
	printf("%s", SUM);

	return 0;
}

/*If successful,
it returns the total number of 
characters written excluding 
null-character appended in the string, 
in case of failure a negative number 
is returned .*/
