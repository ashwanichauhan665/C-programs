#include<stdio.h>
int main()
{
    int arr[5],i,n,temp,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    } 
    printf("\nThe repeated element is: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   
            if(arr[i]==arr[j])
              {
                printf("%d",arr[i], arr[j]);
              }
              
        }
    }
             

          
    return 0;
}