#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
        
    }
    printf("\n");
}
int maximum(int a[],int n){
     int max=INT_MIN,i;
     for(i=0;i<n;i++){
    if(max<a[i])
    {
        max=a[i];
    }}
    return max;
}
void sortarray(int *a,int n)
{
    int max;
     max = maximum(a,n);
    int i,j;
    int* count = (int*)malloc((max)*sizeof(int));
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    i=0;j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int a[]={9,5,3,8,6,8,2,2,1};
    int n=9;
    printarray(a,n);
    sortarray(a,n);
    printarray(a,n);
    return 0;
}