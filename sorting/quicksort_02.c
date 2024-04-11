#include<stdio.h>
int quicksort(int a[],int first ,int last)
{
    int pivot=a[first];
    int i=first+1;
    int j=last;
    int temp;
    if(first<last)
    {
        pivot=a[first];
        i=first;
        j=last;
        do
        {
            while(a[i]<=pivot)
            i++;
            while(a[j]>pivot)
            j--;
        }
        if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    while(i<j)
    temp=a[first];
    a[first]=a[j];
    a[j]=temp;
    return j;
}
void quicksort(int a[],int first,int last)
{
    int partitionindex;
    while (first<last){
    partitionindex=partition(a,first,last);
    quicksort(a,first,partitionindex-1);
    quicksort(a,partitionindex+1,last);
    }
}
int main()
{
    int a[]={3,6,8,9,3,2,6,7};
    int n=8;
    printarray(a,n);
    quicksort(a,0,n-1);
    printarray(a,n);
    return 0;
}