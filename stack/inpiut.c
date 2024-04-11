#include<stdio.h>
#include<conio.h>
void main()
{
int a = 25;
int b = 48;
int small =0,gcd = 0;
if (a > b)
     small = b;
else
    small = a;
for (int i=1;i<=small;i++){
    if (a%i == 0 && b%i == 0){
         gcd = i;
    }
}
printf("%d",gcd);
getch();
}