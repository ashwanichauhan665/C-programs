#include<stdio.h>
int main(){
    int f,c;
    printf("Enter the temprature in farenheit: ");
    scanf("%d",&f);
    c = (f-32)*5/9;
    printf("The temprature in celcius is : %d",c);
}