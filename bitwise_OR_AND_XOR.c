#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*int n: the highest number to consider
int k: the result of comparison must be lower than this number to be considered
you need to Print the maximum values for the and, or and xor comparisons, each on a separate line.
*/

void calculate_the_maximum(int n, int k)
{
    int max1=0,max2=0,max3=0;
    for(int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (((i&j) > max1) && ((i&j) < k)) {
                max1 = i&j;
            }
            if (((i|j) > max2) && ((i|j) < k)) {
                max2 = i|j;
            }
            if (((i^j) > max3) && ((i^j) < k)) {
                max3 = i^j;
            }
        }
    }
        printf("\n%d\n%d\n%d",max1,max2,max3);

}

int main() {
    int n, k;//k is the threshold,n is the set of natural numbers from 1 to n.

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
