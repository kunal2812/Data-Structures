/*LINKED LIST USING QUEUE*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front,*rear,*p,*temp,*newnode;
void Enqueue()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to enqueue");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL)    /*MISSED*/
    {
        rear=newnode;
        front=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("Nothing to dequeue");
    }
    else{
        p=front;
        front=front->next;
        free(p);
    }
}
void fronT()
{
    if(front==NULL)
    {
        printf("Nothing to show");
    }
    else{
        printf("%d\n",front->data);
    }

}
void reaR()
{
    if(rear==NULL)
    {
        printf("Nothing to show\n");
    }
    else{
        printf("%d\n",rear->data);
    }

}
void display()
{
    struct node *temp=front;
    if(front==NULL)
    {
        printf("Nothing to display\n");
    }
    else{
            while(temp!=NULL)
            {
                printf("%d->",temp->data);
                temp=temp->next;
            }
    }
}
int main()
{
    int x;
  printf("ENTER:\n1.ENQUEUE\n2.DEQUEUE\n3.FRONT\n4.REAR\n5.DISPLAY\n");
  while(1)
  {
      scanf("%d",&x);
      switch (x)
          {
              case 1:{
                     Enqueue();
                     break;
              }
               case 2:{
                     dequeue();
                     break;
              }
               case 3:{
                     fronT();
                     break;
              }
               case 4:{
                     reaR();
                     break;
              }
               case 5:{
                     display();
                     break;
              }
          }
  }

}
