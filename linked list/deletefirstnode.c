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
struct node* deletefirstnode(struct node*head)
{
    struct node*p;
    if(head!=NULL)
    {
        p=head;
    head=head->next;
    printf("Element deleted is %d\n",p->data);
    free(p);
    }
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
          head=deletefirstnode(head);
          printf("After  deletion\n");
          printlinkedlist(head);
          return 0;


}