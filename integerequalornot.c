#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}