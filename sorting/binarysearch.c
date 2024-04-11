#include<stdio.h>
int main()
{
    int a[50],i,n,low,high,mid,x;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elemnt do u want to search");
    scanf("%d",&x);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<x)
        
        low=mid+1;
        
        elseif(a[mid]==x)
        {
        printf("The element is %d",x,mid+1);
        break;
    }
    else
    high=mid-1;
    mid=(low+high)/2;
    }
if(high<low)
{
    printf("the element is %d not found",x);
}
return 0;
}