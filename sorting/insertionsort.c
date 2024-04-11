#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
void insertionsort(int *a,int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
    int a[]={5,3,6,8,9,2};
    int n=6;
    printarray(a,n);
    insertionsort(a,n);
    printarray(a,n);
    return 0;
}