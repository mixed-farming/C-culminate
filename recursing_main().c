// C program to illustrate calling
// main() function in main() itself
#include <stdio.h>

// Driver Code
int main()
{

    // Declare a static variable
    static int N = 10;

    // Condition for calling main()
    // recursively
    if (N > 0) {
        printf("%d\t", N);
        N--;
        main();
    }
        return 0;
}
