#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev; 
};
struct node* list_traversal(struct node* head)
{
    struct node* p = head;
    while(p!=NULL)
    {
        printf("Element is: %d\n",p->data);
        p=p->next;
        
    }
    return head;
}

struct node* delete_at_beg(struct node* head)
{
   
    if(head!=NULL)
    {
         struct node * p = head;
        head=head->next;
        head->prev=NULL;
        free(p);
    }
    return head;
}

struct node* delete_end (struct node * head)
{
    struct node *ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(ptr->next);
    return head;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
   
    head->data=22;
    second->data=33;
    third->data=44;

    head->next=second;
    second->next=third;
    third->next=NULL;

    head->prev=NULL;
    second->prev=head;
    third->prev=second;

    printf("Before deletion: \n");
    list_traversal(head);
    
    printf("After deletion: \n");
    //head=delete_at_beg(head);
    head=delete_end(head);
    list_traversal(head);
    return 0;
}