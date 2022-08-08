// C program to illustrate strstr()
#include <string.h>
#include <stdio.h>

int main()
{
	// Take any two strings
	char s1[] = "king and his queen";
	char s2[] = "his";

	// Find first occurrence of s2 in s1
	char *p = strstr(s1, s2);

	// Prints the result
	if (p) {
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
	} else
		printf("String not found\n");

	return 0;
}
