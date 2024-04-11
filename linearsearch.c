#include<stdio.h>
int main()
{
    int a[30],i,j,n,element,Notfound;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element do you want to search");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            printf("Element found %d ",i);
        }
    
        if(i==n)
        {
            printf("Elment not found");
        }

    }
    
    return 0;
}