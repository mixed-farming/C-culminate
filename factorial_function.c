#include <stdio.h>
#include <stdlib.h>

long factFn(int); //prototype

int main()
{
    int n;
    long int f;
    printf("Enter a number :");
    scanf("%d",&n);
    f =factFn(n);
    printf("Fact= %ld",f);
    return 0;
}

long int factFn(int num)
 {
//function definition
int i;
long int fact=1;
//factorial computation
for (i=1; i<=num; i++)
fact=fact * i;
// return the result
return (fact);
 }
