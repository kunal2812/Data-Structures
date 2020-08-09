/*STACKS USING LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top,*temp,*p,*g,*z;
int main()
{
    int x;
    printf("Enter 1 to push \n, 2 to pop \n, 3 to peek \n, 4 to display\n");
    while(1)
    {
        scanf("%d",&x);
        switch (x)
    {
    case 1:
        {
             push();
             break;
        }
    case 2:
        {
            pop();
            break;
        }
    case 3:

        {
            peek();
            break;
        }
    case 4:
        {
            display();
            break;
        }
}
    }

}
int push()
{

    int value;
    printf("Enter value to be pushed\n");
    scanf("%d",&value);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=top;
    top=newnode;


}
int pop()
{
    int poppedVal;
    if(top!=NULL)
    {
        g=top;
        printf("popped value is %d",top->data);
        top=top->next;
        g->next=NULL;

    }
    else{
        printf("Stack underflow\n");
    }

}
void peek()
{
    if(top!=NULL){
            z=top;
    printf("value on top is %d\n",z->data);
    }
    else{
        printf("stack underflow\n");
    }
}
void display()
{
    p=top;
    if(p!=NULL)
    {
      while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;

    }
    }
    else{
        printf("stack underflow");
    }

}

