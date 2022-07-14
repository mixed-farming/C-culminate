//finding the number of cycles in an undirected graph using depth first search(dfs)
#include<stdio.h>
#include<stdlib.h>

int cycle=0;
void dfs(int adj[][10],int ind,int visited[],int parent,int v)
{
    visited[ind]=1;
    for(int i=0; i<v; i++)
        if(adj[ind][i])
        {
            if(visited[i] && i!=parent)
            cycle++;
            else if(!visited[i])
                dfs(adj,i,visited,ind,v);
        }
}
int main()
{
    int adj[10][10]= {0},v,e,visited[10]= {0};
    scanf("%d%d",&v,&e);
    for(int i=0; i<e; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        adj[x-1][y-1]=adj[y-1][x-1]=1;
    }
    for(int i=0; i<v; i++)
        if(!visited[i])
            dfs(adj,i,visited,-1,v);
    printf("%d",cycle/2);
    return 0;
}
