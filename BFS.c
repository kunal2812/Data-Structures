#include<stdio.h>
#include<stdlib.h>
#define n 25
int queue[n],front=-1,rear=-1;

int AdjMat[10][10]={0};
int visited[10]={0};

void AddEdge(int x,int y){
  AdjMat[x][y]=1;
  AdjMat[y][x]=1;
}
void ShowGraph(int node){
  int i=0,j=0;
  for(i=0;i<node;i++){
    for(j=0;j<node;j++){
      printf("%d ",AdjMat[i][j]);
    }
    printf("\n");
  }
}
void Enqueue(int val)
{
    if(rear==n-1)
    {
        printf("Queue Overflow\n");
    }
    else{
        rear++;
        if(front==-1){
        front=0;
        }
        queue[rear]=val;
    }

}
void dequeue()
{
    if(front!=-1 && front<=rear)
    {
        front++;

    }
}
void display()
{
     int i;
     for(i=front;i<=rear;i++)
     {
         printf("|%d|",queue[i]);
     }
}

void BFS(int root, int node){

  int p,i,j;
  Enqueue(root);
  visited[root]=1;
  while(j<10){
    p = queue[front];   
    dequeue();
    printf("%d\n",p);
    for(i=0;i<node;i++){
      if(AdjMat[p][i]==1 && visited[i]==0){
        Enqueue(i);
        visited[i]=1;      
    }    
  }
  i=0;
  j++;  
}
}
void DFS(int root,int node){
  
}

int main()
{
  int node;
  int edges;
  int x,y;
  AddEdge(0,1);
  AddEdge(1,3);
  AddEdge(0,3);
  AddEdge(1,2);
  AddEdge(1,5);
  AddEdge(1,6);
  AddEdge(1,3);
  AddEdge(3,4);
  AddEdge(3,2);
  AddEdge(4,6);
  AddEdge(4,2);
  ShowGraph(7);
  BFS(0,7);
  DFS(0,7);
}
