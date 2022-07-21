#include <stdio.h>
#include <stdlib.h>

/*imagine 3 peg 3 disk problem with peg A as source, peg B as auxiliary and peg C as destination
The first thing would be
n==3... moving n-1 disks from A to B using C as auxiliary
Then
Moving n-1 disks from B to C using A as auxiliary
Finally when
n==1, move single disk from A to C.

NOTE : The minimal number of moves required to solve a Tower of Hanoi puzzle is (2^n) − 1, where n is the number of disks.
*/

int tower(int n,char s,char t,char d)
{
    static int count = 0;
    count++;
    if (n==1)//base condition
    {
        printf("Moving disc from %c to %c\n",s,d);//A to C
        return count;
    }
    tower(n-1,s,d,t);//A to B using C as auxiliary
    printf("Moving disc from %c to %c\n",s,d);
    tower(n-1,t,s,d);//Moving n-1 disks from B to C using A as auxiliary
}
int main()
{
    printf("Name : Manoj M Mallya\nRegistration number : 200905130\nBatch : C2\n\n");
    int n,m;
    printf("Enter the number of disks used for tower of hanoi : ");
    scanf("%d",&n);
    char s='a',d='c',t='b'; //s - source , d - destination , t - temporary
    m = tower (n,s,t,d);
    printf("\nThe number of moves taken : %d\n",m);
    return 0;
}
