#include<stdio.h>
int main()
{
    int a[50],i,j,n1,n2,b[50],k;
    printf("Enter the element of set");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element of set2");
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }printf("The set difference is: ");
    for (i=0;i<n1;i++)
    {
        k=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                k=k+1;
                break;
            }
            }
            if (k==0)
            {
               printf(" %d",a[i]); 
            }
        
    }
    
    return 0;
}