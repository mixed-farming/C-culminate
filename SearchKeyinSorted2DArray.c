#include <stdio.h>
#include <stdlib.h>

int search(int a[4][4],int n,int x)
{
    if(n==0)//matrix of order zero
        return -1;
    int smallest=a[0][0],largest=a[n-1][n-1];
    if(x<smallest || x>largest)//search key value is out of range
        return -1;

    int i=0,j=n-1;
    while(i<n && j>=0)
    {
        if(a[i][j]==x)
        {
            printf("Element found at position(%d,%d) in the matrix.",i+1,j+1);
            return 1;
        }

        if(a[i][j]>x)
            j--;
        else //a[i][j]<x
            i++;
    }

    printf("Element not found.");//if (i==n || j==-1)
    return 0;
}

int main()
{
    int a[4][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 27, 29, 37, 48 },
        { 32, 33, 39, 50 }
    };
    search(a,4,37);
    return 0;
}


