/*INFIX TO POSTFIX USING STACK*/
#include<stdio.h>
#define n 50
int top=-1;
char stack[n];
int y=1;
char ch;
char popped;
    void push(char x)
    {
        if(top==n-1){
            printf("stack overflow\n");
        }
        else{
            top++;
            stack[top]=x;
        }
    }
    char pop()
    {

        if(top==-1){
            printf("stack underflow\n");
        }
        else{
            popped=stack[top];
            top--;
            return popped;
        }
    }
    int priority(char c)
    {
        if(c=='+' || c=='-')
            return 1;
        else if(c=='*' || c=='/')
            return 2;
        else if(c=='^')
            return 3;
        else if(c=='(')
            return 0;
    }
void main()
{
    InfixtoPostfix();
}
void InfixtoPostfix()
{
    char Inexp[50];
    int i=0;
    printf("Enter the expression\n");
    scanf("%s",Inexp);
    while(Inexp[i]!=NULL)
    {
        if(Inexp[i]>='a' && Inexp[i]<='z')
           {
               printf("%c",Inexp[i]);
           }
           else if(Inexp[i]=='(')
           {
               push(Inexp[i]);
           }
           else if(Inexp[i]==')')
           {
               while(stack[top]!='(')
               {
                  printf("%c",pop());
               }
               pop();
           }
           else
           {
                   while(priority(stack[top]) >= priority(Inexp[i]))
                   {
                       printf("%c",pop());
                   }
                   push(Inexp[i]);
           }
           i++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
}
