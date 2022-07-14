#include<stdio.h>
#include<stdlib.h>
void insertionSort(int *a, unsigned int n)
{
 int i, j, v;
 int opcount=0;
 for(i=1;i<n;i++)
 {
 v=a[i];
 j=i-1;
 // increment opcount whenever there is an element comparison
 while(++opcount && j>=0 && a[j]> v)
 {
 a[j+1]=a[j];
 j=j-1;
 }
 a[j+1]=v;
 }
 printf("\n Operation count %d\n",opcount);
}


int main()
{
 int *a;
 int i,n = 5;
 // generate worst case input of different input size

 for (int j=0; j < 4; j++) // repeat experiment for 4 trials
 {
 a = (int *)malloc(sizeof(int)*n);
 for (int k=0; k< n; k++)
 a[k] = n-k; // descending order list
 printf("Elements are ");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 insertionSort(a,n);
 printf("Elements after selection sort ");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n");
 free(a);
 n = n + 5; // try with a new input size
 }
 return 0;
}
