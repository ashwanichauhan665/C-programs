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
struct node * insert_at_beg (struct node* head,int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    if (head!=NULL)
    {
        ptr->next=head;
        head->prev=ptr;
        ptr->prev=NULL;
        head=ptr;
    }
    return head;
}
struct node* insert_at_end (struct node* head,int data)
{
    struct node*new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    struct node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=new_node;
    new_node->next=NULL;
    new_node->prev=p;
    return head;
}

struct node* insert_at_index (struct node*head,int data,int index)
{
    struct node * new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    struct node * p = head;
    int i;
    for(i=0;i<index;i++)
    {
        p->data;
    }
    new_node->next=p->next;
    p->next=new_node;
    new_node->prev=p;
    new_node->next->prev=new_node;
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
    printf("Before insertion: \n");
    list_traversal(head);
    printf("After insertion: \n");
    //head=insert_at_beg(head,999);
    //head=insert_at_end(head,788);  
    head=insert_at_index(head,345,1); 
    list_traversal(head);
    return 0;
}