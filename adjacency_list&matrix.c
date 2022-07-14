#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int n;
  printf ("Enter the number of vertices : ");
  scanf ("%d", &n);
  int a[100][100]={0};

  for(int i=0;i<n;i++)
  {
      int vertex=1;
      printf("Vertex %d - Enter the connected vertices(1-%d),0 to break : ",i+1,n);
      do
      {
         scanf("%d",&vertex);
         a[i][vertex-1]=1;
      }while(vertex!=0);
  }

  printf("Adjacent Matrix : \n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }

  printf("Adjacency List : \n");
  for(int i=0;i<n;i++)
  {
      printf("%d | ",i+1);
      for(int j=0;j<n;j++)
      {
          if(a[i][j])
          printf("%d->",j+1);
      }
      printf("0\n");
  }
    return 0;
}
