#include<stdio.h>
void printarray(int *a,int n)
{
    for( int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
void merge(int a[],int mid,int low,int high)
{
   int i,j,k,b[100];
   i=low;
   j=mid+1;
   k=low;
   while(i<=mid && j<=high)
   {
    if(a[i]<a[j])
    {
       b[k]=a[i];
       i++;
       k++;
    }
    else{
        b[k]=a[j];
        j++;
        k++;
    }
   }
   while(i<=mid)
   {
    b[k]=a[i];
    i++;
    k++;
   }
   while(j<=high)
   {
    b[k]=a[j];
    j++;
    k++;
   }
   for(int i=low;i<=high;i++)
   {
    a[i]=b[i];
   }
}
void mergesort(int a[],int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}
int main()
{
    int a[]= {1,5,4,5,7,8,5,4};
    int n=8;
    printarray(a,n);
    mergesort(a,0,7);
    printarray(a,n);
    return 0;
}