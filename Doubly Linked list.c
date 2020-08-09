/*LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp,*p,*z,*q,*A,*B;
int val;
int main()
{
    int x,y,i;
    printf("No. of nodes\n");
    scanf("%d",&y);
    for(int i=1;i<=y;i++)
    {
        struct node* node;
        node=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&node->data);
        node->next=NULL;
        node->prev=NULL;

    if(head==NULL){
        head=temp=node;
    }
    else{
        temp->next=node;
        node->prev=temp;
        temp=temp->next;
    }
    }
    printf("Enter:\n1 to add a node at beginning\n2 to add a node at end \n3 to add in between\n4 to remove 1st node\n5 to remove last node\n6 to remove node in between\n7 to display\n");
    while(1)
    {
        scanf("%d",&x);
        switch (x)
    {
    case 1:
        {
             AddNodeBegin();
             break;
        }
    case 2:
        {
            AddNodeEnd();
            break;
        }
    case 3:

        {
            AddNodeBetween();
            break;
        }
    case 4:
        {
            DelStart();
            break;
        }
        case 5:
        {
            DelEnd();
            break;
        }
        case 6:
        {
            DelBetween();
            break;
        }
        case 7:
        {
            display();
            break;
        }
}
    }

}
void AddNodeBegin()
{

    printf("Enter data to add to node");
    scanf("%d",&val);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
}
void AddNodeEnd()
{
    p=head;
    printf("Enter data to add to node");
    scanf("%d",&val);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    while(p->next!=NULL)
    {
    p=p->next;
    }
    p->next=newnode;
    newnode->next=NULL;
    newnode->prev=p;
}
void AddNodeBetween()
{
    z=head;
    int pos,count=0;
    printf("Enter position");
    scanf("%d",&pos);
    printf("Enter data to add to node");
    scanf("%d",&val);
    while(count!=pos)
    {

        z=z->next;
        count++;
    }
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    z->next=newnode;
    newnode->next=z->next;
    newnode->prev=z;
}
void DelStart()
{
    p=head;
    head=head->next;
    p->next=NULL;
    head->prev=NULL;
}
void DelEnd()
{
    struct node *last;
    B=head;
    while(B->next!=NULL)
    {
        q=B;
        B=B->next;
    }
    last=B;
    last=last->prev;
    last->next=NULL;
    B->prev=NULL;
}
void DelBetween()
{
    z=head;
    temp=NULL;
    p=NULL;
    int count=0,pos;
    printf("Enter position");
    scanf("%d",&pos);
    while(count!=pos)
    {
        p=z;
        z=z->next;
        temp=z->next;
        count++;
    }

     p->next=temp;
     temp->prev=p;
    z->next=NULL;
    z->prev=NULL;

}
void display()
{
    p=head;
    while(p!=NULL)
    {

        printf("|%d| -><- ",p->data);
        p=p->next;

    }
    printf("\n");
    while(temp!=NULL)
    {

        printf("|%d| -><- ",temp->data);
        temp=temp->prev;

    }
    printf("\n");
}
