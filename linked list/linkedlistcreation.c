#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printlinkedlist(struct node *ptr)
{
while(ptr!=NULL)
{
    printf("Element: %d\n",ptr->data);
ptr=ptr->next;
}
}

int main()
{
    
    struct node*head;
    struct node*second=NULL;
    struct node*third=NULL;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->next=second;
    second->next=third;
    third->next=NULL;

    head->data=22;
    second->data=44;
    third->data=66;

    printlinkedlist(head);
    
}