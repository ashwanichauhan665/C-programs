#include<stdio.h>
int main()
{
    int n,rev=0,rem,a;
    printf("Enter the no.");
    scanf("%d",&n);
    a=n;
    while (n)
    {
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
    }
    if (a==rev)
    
        printf(" %d is pallendrome",a);
        
    
    else
    
        printf("  Not pallendrome");

    
    return 0;
    }
    
    
