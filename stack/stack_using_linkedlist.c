#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    int top;
    struct stack*next;
};
void linkedlist_traversal(struct stack* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct stack * isEmpty(struct stack * top)
{
    if(top==NULL)
    {
        printf("The stack is empty:");
    }
    else{
        return 0;
    }
}
struct stack * isFull( struct stack * top)
{
    struct stack * n = (struct stack *)malloc(sizeof (struct stack));
    if (n==NULL)
    {
        printf("The stack is full:");
    }
    else{
        return 0;
    }
}
struct stack* push(struct stack * top,int data)
{
    if(isFull(top))
    {
       printf("overflow condition");
    }
    else {
        struct stack * n = (struct stack*)malloc(sizeof(struct stack));
        n->data=data;
        n->next=top;
        top=n;
        return top;

    }
}

struct stack * pop(struct stack * top)
{
    if(isEmpty(top))
    {
        printf("underflow condition");
    }
    else{
        struct stack * p;
        p=top;
        top=top->next;
        free(p);
        return top;
    }
}

int main()
{
    struct stack * top = NULL;
    top=push(top,22);
    top=push(top,33);
    top=push(top,66);
    top=push(top,77);
     top=pop(top);
    linkedlist_traversal(top);

    return 0;
}