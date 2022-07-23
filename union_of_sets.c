#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[100],b[100],c[100],flag=0;

    printf("Enter the number of elements in 1st array : ");
    scanf("%d",&m);
    int p=m;
    printf("\nEnter the elements : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the number of elements in 2nd array : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }

    for (i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
		if(b[i]==a[j])
		flag=1;
		if(flag==0)
		{
		   c[p]=b[i];
		   p+=1;
		}
		flag=0;
	}
	printf("\nThe union set is ");
	for(i=0;i<p;i++)
	printf("%d ",c[i]);

    return 0;
}

