#include<stdio.h>
int main()
{
    int arr[5],n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array element is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nThe minimum element is: ");
        printf(" %d",arr[0]);
    
}