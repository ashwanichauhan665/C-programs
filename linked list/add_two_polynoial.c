#include<stdio.h>
#include<stdlib.h>
struct node{
    int coff;
    int pow;
    struct node * next;
};
void create(int x,int y,struct node ** head)
{
    struct node *r , *z;
    z = head;
    if(z == NULL)
    {
        r = (struct node*)malloc(sizeof(struct node));
        r->coff = x;
        r->pow = y;
        head = r;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
    else{
        r = (struct node* )malloc(sizeof(struct node));
        r->coff = x;
        r->pow = y;
        r->next = (struct node*)malloc(sizeof(struct node));
        r = r->next;
        r->next = NULL;
    }
}
void polyadd(struct node* poly1,struct node* poly2, struct node* poly)
{
    while(poly1->next && poly2->next)
    {
        if(poly1->pow > poly2->pow)
        {
            poly->coff = poly1->coff;
            poly->pow = poly2->pow;
            poly1 = poly1->next;
        }
        else if(poly1->pow < poly2->pow)
        {
            poly->coff = poly2->coff;
            poly->pow = poly2->pow;
            poly2 = poly2->next;
        }
        else{
            poly->pow = poly1->pow;
            poly->coff = poly1->coff + poly2->coff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
   poly->next = (struct node*)malloc(sizeof(struct node));
   poly = poly->next;
   poly->next = NULL;

    }
    while(poly1->next || poly2->next)
    {
        if (poly1->next)
        {
            poly->coff = poly1->coff;
            poly->pow = poly1->pow;
            poly = poly->next;
        }
        if(poly2->next)
        {
            poly->coff = poly2->coff;
            poly->pow = poly2->pow;
            poly = poly->next;
        }
        poly->next = (struct node*)malloc(sizeof(struct node));
   poly = poly->next;
   poly->next = NULL;
        
    }
}
void display(struct node * Node)
{
    while(Node->next!=NULL)
    {
        printf("%d x^ %d",Node->coff,Node->pow);
        Node = Node->next;
    }
    if(Node->coff>=0)
    {
        if(Node->next != NULL)
        {
            printf("+");
        }
    }
}
int main()
{
    struct node * poly,* poly1, poly2;
    create(5,2,&poly1);
    create(4,1,&poly1);
    create(6,0,&poly1);

    create(4,1,&poly2);
    create(3,0,&poly2);

    printf("First number:");
    display(poly1);

    printf("second number");
    display(poly2);

    poly = (struct node* )malloc(sizeof(struct node));
    polyadd(poly1,poly2,poly);
    printf("Add polynomial");
    display(poly);

    return 0;
}