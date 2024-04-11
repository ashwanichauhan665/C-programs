#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};
struct node * creation(int  data)
{
    struct node * n = (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node * p = creation(2);
    struct node * p1 = creation(5);
    struct node * p2 = creation(6);
    struct node * p3 = creation(7);
    struct node * p4 = creation(1);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p2->right = p4;

    inorder(p);

    return 0;
}