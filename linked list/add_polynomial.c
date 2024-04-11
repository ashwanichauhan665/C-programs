#include<stdio.h>
#include<stdlib.h>
struct node{
    int exp,co;
    struct node*next;
};
struct node* create(struct node * head,int co,int exp)
{
    struct node *temp,*flag;
    if(head==NULL)
    {
       temp=(struct node*)malloc(sizeof(struct node));
       temp->co=co;
       temp->exp=exp;
       temp->next=NULL;
       head=temp;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        flag=(struct node*)malloc(sizeof(struct node));
        flag->co=co;
        flag->exp=exp;
        flag->next=NULL;
        temp->next=flag;
    }
    return head;
}
struct node*polyadd(struct node*p1,struct node*p2,struct node*sum)
{
    struct node* poly1=p1,*poly2=p2,*res;
    if(poly1!==NULL||poly2==NULL)
    {
        sum=poly1;
        return sum;
    }
    else if(poly1==NULL||poly2!=NULL)
    {
        sum=poly2;
        return sum;
    }
    else(poly1!=NULL||poly2!=NULL)
    {
        if(sum==NULL)
         {
            struct node*sum=(struct node*)malloc(sizeof(struct node));
            res=sum;
         }
         else{
            struct node*res->next=(struct node*)malloc(sizeof(struct node));
            res=res->next;
         }
    }
    if(poly1->exp > poly2->exp)
    {
        res->co=poly1->co;
        res->exp=poly1->exp;
        poly1=poly1->next;
    }
    else if(poly1->exp<poly2->exp)
    {
        res->co=poly1->co;
        res->exp=poly2->exp;
        poly2=poly2->next;
    }
    else if(poly1==poly2)
    {
        res->co=poly1->co + poly2->co;
        res->exp=poly1->exp;
        poly1=poly1->next;
        poly2=poly2->next;
    }
    while(poly1!=NULL)
    {
        res->next=(struct node*)malloc(sizeof(struct node));
        res=res->next;
        res->co=poly1->co;
        res->exp=poly1->exp;
        poly1=poly1->next;
    }
    while(poly2!=NULL)
    {
        res->next=(struct node*)maloc(sizeof(struct node));
        res->exp=poly2->exp;
        poly2=poly2->next;
        res->next = NULL;
    }
return sum;
}
void display(struct node*head)
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d^%d+",temp->co,temp->exp);
    temp=temp->next;
    }
    printf("\n");
}




int main()
{
    int ch,co,exp;
    struct node*p1,*p2,sum;
    int loop=1;
    while(loop){
    printf("Enter the choice");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
         scanf("%d",&co);
         scanf("%d",&exp);
         create(p1,co,exp);
        break;
    case 2: 
         scanf("%d",&co);
         scanf("%d",&exp);
         create(p2,co,exp);
         break;
    case 3:
         sum=polyadd(p1,p2,sum);
         display(p1);
         display(p2);
         display(sum);
         break;
    default:
          printf("Invalid input \n Re Enter:");
        break;
    }
    }    
          return 0;
    }