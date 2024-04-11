#include<stdio.h>
#include<stdlib.h>
struct node{
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
struct node* insertlinkedlistfirst(struct node*head ,int data)
{
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=head;
return ptr;

}
struct node*insertlinkedlistatend(struct node *head,int data)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node*p=head;
while(p->next!=NULL)
{
    p=p->next;

}
p->next=ptr;
ptr->next=NULL;
return head;


}



int main()
{
    struct node*head;
    struct node*second;  
    struct node*third;
    struct node*fourth;


          head=(struct node*)malloc(sizeof(struct node));
          second=(struct node*)malloc(sizeof(struct node));
          third=(struct node*)malloc(sizeof(struct node));
          fourth=(struct node*)malloc(sizeof(struct node));
                            
                            
          head->data=22;
          second->data=33;                           
          third->data=44;
          fourth->data=55;

          head->next=second;
          second->next=third;
          third->next=fourth;
          fourth->next=NULL;

          printf("Before insertion\n");
          printlinkedlist(head);
          //head=insertlinkedlistfirst(head,78);
          head=insertlinkedlistatend(head,89);
          printf("After  insertion\n");
          printlinkedlist(head);
          return 0;


}