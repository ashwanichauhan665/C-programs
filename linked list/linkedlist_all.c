#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void beginsert()
{
    struct node*ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\nOVERFLOW");
    }
    else {
        printf("\n Enter the node data");
        scanf("%d",item);
        ptr->next=head;
        head=ptr;
    }
}
void lastinsert()
void begindelete()
void lastdelete()
void display()
void search()
void main()
{
    int choice=0;
    while(choice!=7){
        printf("\n**********main menu*********\n");
        printf("\nchoose one option from the follwing list...\n");
        printf("\n============================");
        printf("\n1. insert in begening\n 2. insert at last\n 3. delete from begening 4. delete frm last 5. search for an element \n 6.show\n 7.exit");
        printf("\n Enter your choice ? \n");
        scanf("\n%d",&choice);
        switch (choice)
        {
            case 1:
            beginsert();
            break;
            case 2:
            lastinsert();
            break;
            case 3:
            begindelete();
            break;
            case 4:
            lastdelete();
            break;
            case 5:
            search();
            break;
            case 6:
            display();
            break;
            case 7:
            exit();
            default:
            printf("Invalid syntax");
        }
    }
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node * second=(struct node*)malloc(sizeof(struct node));
    struct node * third=(struct node*)malloc(sizeof(struct node));
    head->data=22;
    second->data=33;
    third->data=44;
    head->next=second;
    second->next=third;
    third->next=NULL;
    return 0;
}