#include<stdio.h>
#include<stdlib.h>
#define n 25
int queue[n],front=-1,rear=-1;
void Enqueue()
{
    int val;
    if(rear==n-1)
    {
        printf("Queue Overflow\n");
    }
    else{

        printf("Enter value to enqueue\n");
        scanf("%d",&val);
        rear++;
        front=0;
        queue[rear]=val;
    }

}
void dequeue()
{
    if(front!=-1 && front<=rear)
    {
        printf("Dequeued value is %d\n",queue[front]);
        front++;

    }
    else
    {
        printf("Nothing to dequeue\n");
    }
}
void fronT()
{
    if(front==-1)
    {
        printf("QUEUE Underflow\n");
    }
    else{
        printf("|%d|\n",queue[front]);
    }

}
void reaR()
{
    if(rear==-1)
    {
        printf("Stack underflow\n");
    }
    else{
        printf("|%d|\n",queue[rear]);
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
