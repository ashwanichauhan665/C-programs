#include<stdio.h>
#include<stdlib.h>
int enqueue( int q[8], int n,int f, int r,int x)
{
    if(r==n-1)
    {
        printf("The queue is Full");
    }
    else{
        if(f==-1)
        {
            f=r=0;
        }
        else{
            r=r+1;
            q[r]=x;
        }
    }
    return f;
}
int main()
{ 
    int f=-1;
    int r=-1;
    int n=8;
    int x=4;
   int q[7]={2,5,6,7,3,5,9};
   for(f=0;f<7;f++)
   {
   printf(" %d",q[f]);
   }
   enqueue(q[8],n,f,r,x);
   for(f=0;f<=r;f++)
   {
     printf(" %d",q[f]);
   }
   return 0;
}