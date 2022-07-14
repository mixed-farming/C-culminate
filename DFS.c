#include<stdio.h>
#include<stdlib.h>

int count=0;

void dfs(int adj[][10],int v,int pop[],int* ptop,int visited[],int i)
{
    printf("%d ",i+1);//print the vertex in output
    visited[i]=1;//mark the vertex as visited
    for(int j=0; j<v; j++)
    {
        if(!visited[j] && adj[i][j])
            dfs(adj,v,pop,ptop,visited,j);//the recursion breaks if the tree leaf encounters null
    }
    pop[(*ptop)++]=i;//push that leaf into pop array
}

int main()
{
    int visited[10]= {0},adj[10][10]= {0},pop[10],ptop=0;
    int v,e,x,y;
    printf("Enter the number of vertices and edges : ");
    scanf("%d %d",&v,&e);
    printf("Enter the vertices between whom there exists an edge : \n");
    for(int i=0; i<e; i++)
    {
        scanf("%d %d",&x,&y);
        adj[x-1][y-1]=adj[y-1][x-1]=1;
    }
    printf("\n\nDFS traversal : ");
    for(int i=0; i<v; i++)
    {
        if(!visited[i])
            dfs(adj,v,pop,&ptop,visited,i);
    }
    printf("\n");

    printf("\n\nPop order : ");
    for(int i=0; i<v; i++)
    {
       printf("%d ",pop[i]+1);
    }
    return 0;
}
