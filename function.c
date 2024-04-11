#include<stdio.h>
int sum()
{
    int a,b,n;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    n=a+b;
    return n;
}
int main()
{
    int s = sum();
    printf("the sum is %d",s);
}