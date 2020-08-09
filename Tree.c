/* TREE USING LINKED LIST */
#include<stdio.h>
#include<stdlib.h>
struct node{
    char c;
    struct node *left;
    struct node *right;
};
int x;
struct node *root, *p,*q,*temp;
char charac,data;
void CreateNode()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter alphabet to store\n");
    scanf("%c\n",&data);
    newnode->c=data;
    if(root==NULL)
    {
        root=newnode;

    }
    if(x==2)
    {
        printf("Enter value whose left or right branch has to be grown\n");
    scanf("%c",&charac);
        while(p->c!=charac || q->c!=charac){
            p=p->left;
            q=q->right;
                }
                if(p->c==charac){
                   p->left=newnode;
                }
                else{
                    if(q->c==charac){
                   p->left=newnode;
                }
                }
    }
    if(x==3)
    {
        printf("Enter value whose left or right branch has to be grown\n");
    scanf("%c",&charac);
         while(p->c!=charac || q->c!=charac){
            p=p->left;
            q=q->right;
        }
        if(p->c==charac){
                   p->right=newnode;
                }
                else{
                    if(p->c==charac){
                   p->right=newnode;
                }
                }
    }
}
int main()
{
    printf("Enter your choice\n");
    printf("0.Exit\n1.Create root node\n2.Create left node\n3.Create right node\n4.Find height\n5.Preorder Traversal\n6.Inorder Traversal\n7.Postorder Traversal\n8.Find Depth");
    scanf("%d\n",&x);
    while(x){
    switch(x)
    {
    case 1:
        {
            CreateNode();
            break;
        }
    case 2:
        {
            CreateNode();
            break;
        }
    case 3:
        {
            CreateNode();
            break;
        }

    }

    }
}
