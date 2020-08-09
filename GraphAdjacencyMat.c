#include<stdio.h>
int AdjMat[10][10]={0};

void AddEdge(int x,int y){
	AdjMat[x-1][y-1]=1;
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
int main(){
	int node;
	int edges;
	int x,y;
	printf("Nodes\n");
	scanf("%d",&node);
	AddEdge(1,2);
	AddEdge(2,4);
	AddEdge(3,5);
	AddEdge(5,2);
	AddEdge(3,2);
	AddEdge(1,5);
	ShowGraph(5);
}