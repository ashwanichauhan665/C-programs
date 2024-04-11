#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b)
    {
        if(b<c)
        {
            printf("c is largest");
        }
        else
        {
            printf("b is largest");
        }}
    else
    {
        if(c<a)
        {
       printf("a is largest");
        }
       else
       {
        printf("c is largest");
       }
    }
    return 0;
    }
