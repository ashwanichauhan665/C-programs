#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printlinkedlist(struct node *head1)
{
while(head1!=NULL)
{
    printf("Element: %d\n",head1->data);
head1=head1->next;
}
}
struct node*mergelist(struct node*head1,struct node*head2)
{
    struct node*p;
    if(head1==NULL&&head2==NULL)
    {
        return 0;//overflow condition
    }
    else{
        p=head1;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=head2;
        while(p->next!=NULL)
        {
            p=p->next;
        }
    }
    return head1;
}


int main()
{
    
    struct node*head1;
    struct node*second1=NULL;
    struct node*third1=NULL;
    struct node*head2;
    struct node*second2;
    struct node*third2;

    head1=(struct node*)malloc(sizeof(struct node));
    second1=(struct node*)malloc(sizeof(struct node));
    third1=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    second2=(struct node*)malloc(sizeof(struct node));
    third2=(struct node*)malloc(sizeof(struct node));


    head1->next=second1;
    second1->next=third1;
    third1->next=NULL;
    head2->next=second2;
    second2->next=third2;
    third2->next=NULL;

    head1->data=22;
    second1->data=44;
    third1->data=66;
    head2->data=77;
    second2->data=88;
    third2->data=99;
    printf("Before merge:\n");
    printlinkedlist(head1);
    head1=mergelist(head1,head2);
    printf("After merge:\n");
    printlinkedlist(head1);
    return 0;
    
}