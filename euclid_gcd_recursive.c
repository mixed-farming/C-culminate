// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

// Function to return gcd of a and b
int gcd(int a, int b)
{
    static int opcount=0;
	if (b == 0)
    {
        printf("The opcount=%d\n",opcount);
		return a;
    }
    else
	{
	    opcount++;
	    return gcd(b,a%b);
	}
}

// Driver program to test above function
int main()
{
	int a = 6, b = 8;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	return 0;
}
