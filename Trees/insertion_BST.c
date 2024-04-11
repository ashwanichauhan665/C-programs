#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * left;
    struct node * right;
};
struct node *create(int data)
{
    struct node * n = (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node * root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void insert(struct node *root,int key)
{
    struct node * prev = NULL;
    while (root!=NULL)
    {
    prev = root;
    }
    if(key==root->data)
    {
        printf("cannot insert %d,already in bst",key);
        return;
    }
    else if(key<root->data)
    {
        root=root->left;
    }
    else{
        root=root->right;
    }
    struct node * new = create(key);
    if(key<prev->data)
    {
    prev->left=new;
    }
    else{
    prev->right=new;
    }
}
int main()
{
    struct node * p = create(5);
    struct node * p1 = create(3);
    struct node * p2 = create(6);
    struct node * p3 = create(2);
    struct node * p4 = create(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

     insert(p,16);
     printf("%d",p->right->right->data);
     return 0;  

}
