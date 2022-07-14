#include <stdio.h>
#define min(a,b) a<b?a:b

int main(void){
    int T;
    scanf("%d",&T);
    int a[T],b[T];
    for(int i=0;i<T;i++)
    {scanf("%d",&a[i]);
    scanf("%d",&b[i]);
    }

    for(int i=0;i<T;i++)
    printf("%d\n",min(a[i],b[i]));
	return 0;
}
