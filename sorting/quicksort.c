#include<stdio.h>
void quicksort(int a[20],int first,int last)
{
    int i,j,temp,pivot;
    if (first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j]>pivot)
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
        return j;
    }
}
int main()
{
    int a[20],i,n;
    printf("Enter the index of array");
    scanf("%d",&n);
    printf("Entre the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
       printf("sorting array is: ");
         quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}