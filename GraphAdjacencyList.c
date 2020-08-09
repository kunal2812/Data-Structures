#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node *A[10]={NULL},*p;
int main(){
	int nodes;
	int edges;
	int x,y;
	int i=0,j=0;
	printf("Nodes\n");
	scanf("%d",&nodes);
	printf("Edges\n");
	scanf("%d",&edges);
	for(i=0;i<edges;i++){
		scanf("%d%d\n",&x,&y);
		struct node* newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data = y;
		if(A[x-1]==NULL){
			A[x-1]=newnode;
		}
		else{
			p = A[x-1];
			while(p->next!=NULL){
				p=p->next;
			}
			p->next=newnode;
			newnode->next=NULL;
		}
		
	}
	for(i=0;i<nodes;i++){
		printf("Adjacency list of node %d is :",i+1);
		p=A[i];
		while(p!=NULL){
			printf("%d -> ",p->data);
			p=p->next;
		}
		printf("\n");
	}
	return 0;
	
}