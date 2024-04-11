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
struct node*find_middle_element(struct node*head,struct node*third)
{
    struct node*p,*ptr;
    if(head!=NULL)
    {
        head=head->next; 
    }
    ptr=(head+third)/2;
    printf("THe element is %d",ptr);
    return head;
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
    head=find_middle_element(head,third);
    printlinkedlist(head);
    return 0;
}