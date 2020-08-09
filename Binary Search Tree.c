#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *temp;
struct node* NewNode(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->left=newnode->right=NULL;
    return newnode;
}
void Inorder(struct node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}
struct node* FindMaxLeftTree(struct node* root)
{
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node* Insert(struct node* root,int num)
{
    if(root==NULL)
    {
        return NewNode(num);
    }
    else if(num <= root->data)
    {
        root->left=Insert(root->left,num);
    }
    else
    {
        root->right=Insert(root->right,num);
    }
     return root;
}
struct node *Search(struct node *root,int num)
{
    if(root->data==num)
    {
        return root;
    }
    else if(num <= root->data)
    {
        return Search(root->left,num);
    }
    else if(num > root->data){
        return Search(root->right,num);
    }
    else{
        return NULL;
    }


}
struct node *Delete(struct node *root,int num)
{
    if(root==NULL)
    {
        return root;
    }
    else if(num <= root->data)
    {
        root->left=Delete(root->left,num);
    }
    else if(num > root->data){
        root->right=Delete(root->right,num);
    }
    else{
                if(root->left==NULL && root->right==NULL)
                    {
        free(root);
        root=NULL;
        return root;
    }
    else if(root->left==NULL)
    {
        struct node *temp=root;
        root=root->right;
        free(temp);
        return root;
    }
    else if(root->right==NULL)
    {
        struct node *temp=root;
        root=root->left;
        free(temp);
        return root;
    }
    else{
        struct node *maxm=FindMaxLeftTree(root->right);
        root->data=maxm->data;
        root->right=Delete(root->right,temp->data);
        return root;
    }

    }

}
int main()
{
    struct node* root = NULL;
    root=Insert(root,15);
    Insert(root,17);
    Insert(root,65);
    Insert(root,38);
    Insert(root,89);
    Insert(root,8);
    Insert(root,99);
    Inorder(root);
    Delete(root,17);
    Delete(root,65);
    Delete(root,38);
    Delete(root,89);
    Delete(root,8);
    Delete(root,99);
    Inorder(root);
}
