#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char * arr;
};
int stacktop(struct stack*sp){
    return sp->arr[sp->top];
}
int isEmpty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* ptr,char value)
{
    if(isFull(ptr))
    {
        printf("The stack is overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value; 
    }
}
char pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("The stack is underflow ");
    }
    else{
           value=ptr->arr[ptr->top];
           ptr->top--;
           return value;
    }
}
int precedence(char ch)
{
    if(ch=='*'|| ch=='/')
    {
        return 3;
    }
    else if(ch=='+'|| ch=='-')
    {
        return 2;
    }
    else
{
    return 0;
}
}
isoperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int postfix_exp(char * infix)
{
    struct stack* sp=(struct struct*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*(sizeof(char*)));
    char*postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
    if(!isoperator(infix[i]))
       {
        postfix[j]=infix[i];
        j++;
        i++;
       }
    else{
        if(precedence(infix[i])>precedence(stacktop(sp)))
        {
            push(sp,infix[i]);
            i++;
        }
        else{
            postfix[j]=pop(sp);
            j++;
        }
    }
    }
        while(!isEmpty(sp))
        {
            postfix[j]=pop(sp);
            j++;
        }
        postfix[j]='\0';
        return postfix;
    
}
int main()
{
    char * infix="a+b/c*d";
    printf("Postfix is %s",postfix_exp(infix));
    return 0;
}