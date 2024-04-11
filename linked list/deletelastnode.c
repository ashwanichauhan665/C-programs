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
struct node* deletelastnode(struct node*head)
{
    struct node*p;
    p=head;
    while(p->next->next!=NULL)
    {
        
        p=p->next;
    }
      p->next=NULL;
      free(p->next);
      return head;
}

struct node* delete_at_index(struct node* head,int index)
{
  struct node * p ,*q;
  p=head;
  while(p!=index-1)
    {
    p=p->next;
    }
    q=p->next;
  p->next=q->next;
  free(q);
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

          printf("Before deletion\n");
          printlinkedlist(head);
          //head=insertlinkedlistfirst(head,78);
          //head=insertlinkedlistatend(head,89);
          //head=insertlinkedlistindex(head,78,2);
          //head=deletelastnode(head);
          head=delete_at_index(head,2);
          printf("After  deletion\n");
          printlinkedlist(head);
          return 0;


}