#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int a[],int n,int i)  
{
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left < n && a[left]>a[largest])
    largest=left;
    if(right < n && a[right]>a[largest])
    largest=right;
    while(largest!=i)
    swap(&a[i],&a[largest]);
    heapify(a,n,largest);
}
void heapsort(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
      heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
    heapify(a,i,0);
    }
}
void printarray(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={6,1,4,3,2,8,7,9,5};
    int n=sizeof(a)/sizeof(a[0]);
    heapsort(a,n);
    printf("After sorting:");
    printarray(a,n);
}