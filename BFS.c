#include<stdio.h>
#include<stdlib.h>
void bfs(int adj[][10],int v,int visited[],int i,int queue[],int* front,int *rear){
    printf("%d ",i+1);
    for(int k=0;k<v;k++)
    if(!visited[k] && adj[i][k]){
        visited[k]=1;
        queue[(*rear)++]=k;
    }
    if(*front+1!=*rear)
    bfs(adj,v,visited,queue[++(*front)],queue,front,rear);
}
int main(){
    int visited[10]={0},adj[10][10]={0},queue[10],front=-1,rear=0;
    int v,e,x,y;
    scanf("%d%d",&v,&e);
    for(int i=0;i<e;i++){
        scanf("%d%d",&x,&y);
        adj[x-1][y-1]=adj[y-1][x-1]=1;
    }
    for(int i=0;i<v;i++)
        if(!visited[i]){
            visited[i]=1;
            bfs(adj,v,visited,i,queue,&front,&rear);
        }
    return 0;
}
