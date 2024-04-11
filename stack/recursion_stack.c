#include<stdio.h>
void display(int n)
{
    if(n<=0)
    {
    return 1;}
    else {
        //printf("%d",n);
        display(n-1);
        printf("%d",n);
       
    }
}
    void main()
    {
        int n = 3;
        display(n);
    }
    
