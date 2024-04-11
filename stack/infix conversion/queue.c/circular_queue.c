#include<stdio.h>
#include<stdlib.h>
int q[5];
int f=-1;
int r=-1;
void enqueue(int n,int x)
{
if(f==-1&&r==-1)
{
    f=r=0;
    q[r]=x;
}
else if(f=(r+1)%n)
{
    printf("queue is Full");
}
else {
    r=(r+1)%n;
    q[r]=x;
    printf("%d",q[r]);
}   
}

void dequeue(int n)
{
    if(f==-1)
    {
        printf("THe queue is Empty");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else{
        f=(f+1)%n;
    }
}
int main()
{
    int q[6],i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(f=0;f<n-2;f++)
    {
        scanf("%d",&q[r]);
    }
    enqueue(n,22);
    for(f=0;f<=r;f++)
    {
        printf("%d",q[f]);
    }
    dequeue(n);
    //enqueue();
    return 0;
}