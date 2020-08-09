/*STACKS USING ARRAYS*/
#include<stdio.h>
#define n 50
int top=-1;
int arr[n];
int main()
{
    int x;
    printf("Enter 1 to push , 2 to pop , 3 to peek , 4 to display\n");
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
    if(top!=n-1)
    {
        top++;
    arr[top]=value;
    printf("operation successful\n");
    }
    else{
        printf("stack overflow\n");
    }

}
int pop()
{
    int poppedVal;
    if(top!=-1)
    {
        arr[top]=poppedVal;
    top--;
    printf("Popped value is %d\n",poppedVal);
    }
    else{
        printf("Stack underflow\n");
    }

}
void peek()
{
    if(top!=-1){
    printf("value on top is %d\n",arr[top]);
    }
    else{
        printf("stack underflow\n");
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}
