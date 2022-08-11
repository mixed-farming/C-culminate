#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    printf("Enter the number : ",n);
    scanf("%d",&n);

    i=n;

    //for (i=n; i>=0; i--){
   //     printf("%d\t",i);
   // }

    while(i>=0)
    {
        printf("%d\t",i);
        i--;
    }
    return 0;
}
