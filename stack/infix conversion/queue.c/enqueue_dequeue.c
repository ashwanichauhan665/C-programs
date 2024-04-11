#include<stdio.h>
void enqueue();
void dequeue();
void show();
int main()
{
    int ch;
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
          enqueue();
          break;
    case 2:
          dequeue();
          break;
    case 3:
          show();
          break;
    default:
         printf("Invalid choice:");
         break;
    }
         
}
void enqueue()
{
    int q[6]={1,6,4,3,8};
    int n=6;
    int f=0,r=4;
    int x=66;
    if(r==n-1)
    {
        printf("The queue is Full");
    }
    else{
        if(r==-1)
        {
            f=r=0;
            q[f]=x;
        }
        else {
            r=r+1;
            q[r]=x;
        }
    }
    printf("Array is: ");
        for(f=0;f<=r;f++)
        {
            printf(" %d",q[f]);
        }
    
}
void dequeue()
{
    int q[5]={1,6,4,3,8};
    int f=0,r=5,n=5;
    if(r==-1)
    {
        printf("The queue is empty");
    }
    else {
        
        f=f+1;
    
        printf(" The delete element is: %d\n",q[f-1]);
         printf("Array is: ");
for(f=1;f<=r;f++)
{
    printf(" %d",q[f]);
}
    }
}
void show()
{
    int q[6]={1,6,4,3,8};
    int n=5;
    printf("The elements present in array:");
    for(int i=0;i<n;i++)
    {
        printf(" %d",q[i]);
    }
}