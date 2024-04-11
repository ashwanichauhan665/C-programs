#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node* front;
struct node* rear;
void printdata(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf(" %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* enqueue(struct node*f,int data)
{
    struct node*x=(struct node*)malloc(sizeof(struct node));
      x->data=data;
     if(f==NULL)
     {
        printf("The queue is overflow");
     }
     else {
        if(front==NULL||rear==NULL)
        {
            front=x;
            rear=x;
            front->next=NULL;
            rear->next=NULL;
            
        }
        else {
            rear->next=x;
            rear=x;
            rear->next=NULL;
        }
     }
     return f;
}
struct node* dequeue(struct node*f)
{
    if(f==NULL)
    {
        printf("underflow condition");
    }
    else {
        front=f;
        f=f->next;
        free(front);
    }
    return f;
}
int main()
{
    struct node*f=(struct node*)malloc(sizeof(struct node));
    struct node*a=(struct node*)malloc(sizeof(struct node));
    struct node*b=(struct node*)malloc(sizeof(struct node));
    struct node*c=(struct node*)malloc(sizeof(struct node));
    struct node*d=(struct node*)malloc(sizeof(struct node));
    f->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    f->data=2;
    a->data=3;
    b->data=4;
    c->data=5;
    d->data=6;
    printf("Before enqueue:");
    printdata(f);
    printf("After enqueue:");
    //f=enqueue(f,77);
    f=dequeue(f);
    printdata(f);
    return 0;
}