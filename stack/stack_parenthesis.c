#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr; 
};
int  isEmpty( struct stack*ptr)
{
    if(ptr->top==-1)
    return 1;
    else{
        return 0;
    }
}
int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    return 1;
    else{
        return 0;
    }
}
void push(struct stack*ptr,char value)
{
   if(isFull)
   {
   printf("The stack is overflow");
   }
   else{
    ptr->top++;
    ptr->arr[ptr->top]=value;
   }
    
}
char pop(struct stack*ptr,char value)
{
    if(isEmpty)
    {
        printf("The stack is underflow");
        return-1;
    }
    else{
         char value=ptr->arr[ptr->top];
        pte->top--;
        return value;
        
    }
}
int parenthesis_match(char * exp)
{
    struct stack * sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size8 sizeof(char));
    for(i=0;exp[i]!='\0';i++)
    {
       if(exp[i]=='(')
       {
        push(sp,'(');
       }
       else if(exp[i]==')')
       {
        if(isEmpty(sp)){
            return 0;
        }
        pop(sp);
       }
    }
    if(isEmpty(sp))
        return 1;
    else{
        return 0;
    }
}
int main()
{
    char* exp="(ab*(cd/e))";
    if(parenthesis_match(exp))
    {
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
    return 0;
}