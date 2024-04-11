#include<stdio.h>
void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
 void selectionsort(int *a,int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
    int a[]={1,6,4,3,7,9};
    int n=6;
    printarray(a,n);
    selectionsort(a,n);
    printarray(a,n);
    return 0;
}