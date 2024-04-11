#include<stdio.h>
#include<stdlib.h>
    int stack[5],n=2;
    int top=-1;

void push()
{
    int x;
    printf("enter the data:");
    scanf("%d",&x);
    if(top==n-1)
      {
        printf("Overflow condition:");
      }
    else
    {
        top++;
        stack[top]=x;
        printf("The push element is: %d",stack[top]);
    }
    printf("\n");
}
void pop()
{ 
    if(top==-1)
    {
        printf("underflow condition:");
    }
    else 
    {
        top--;
      printf("The pop element is; %d",stack[top]);
    }
    printf("\n");
}
void peek()
{
    if(top==-1)
    {
        printf("the stack is empty");
    }
    else 
    {
        printf("%d",stack[top]);
    }
    printf("\n");
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    do{
    printf("Enter the choice which do u want: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: push(); 
        break;
    case 2: pop();
         break;
    case 3: peek();
         break;
    case 4: display();
         break;
    default:
         printf("invalid input:");
        break;
    }}
    while(ch!=0);
    return 0;
}