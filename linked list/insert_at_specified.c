 #include<stdio.h>
 #include<stdlib.h> 
struct node{
    int data;
    struct node *p;
};
void printlinkedlist( struct node*p)
{
while(p!=NULL)
{
    printf("Element is %d",p->data);
    p=p->next;
}
}
int insertlinkedlist(int p, int data, int loc)
{
    struct node *ptr;
    struct node *temp;
    int k;
    for(k=0;temp=p;k<loc-1;i++)
    {
       temp=temp->next;
       if(temp==NULL)
       {
        printf("insertion not possible");
       return;
       }      
       ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
       ptr->next=temp->next;
       temp->next=p;  
    }
    return ptr;
}

int main()
{
    struct node*p;
    struct node*q;
    struct node*r;
    struct node*s;

    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node));
    r=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    
    p->data=22;
    q->data=33;
    r->data=44;
    s->data=55;

    p->next=q;
    q->next=r;
    r->next=s;
    s->next=NULL;

    printf("before insert");
    printlinkedlist(p);
    p=insertlinkedlist(p,89,3);
    printf("after insertion");
    printlinkedlist(p);
    return 0;   
}