#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int rollno;
    float m1;
    float m2;
    float m3;
}s[5];

int main()
{
    int i;
    

    printf("Enter the record: \n");
    for(i=0;i<2;i++)
    {
    printf("enter the name: \n");
    scanf("%s\n",&s[i].name);
    printf("enter the roll no: \n");
    scanf("%d\n",&s[i].rollno);
    printf("enter the marks of first subject: \n");
    scanf("%f\n",&s[i].m1);
    printf("enter the marks of second subject: \n");
    scanf("%f\n",&s[i].m2);
    printf("enter the marks of third subject: \n");
    scanf("%f\n",&s[i].m3);
    }

    printf("the data is student s1: \n");
    for(i=0;i<2;i++)
    {
    printf("%s\n",s[i].name);
    printf("%d\n",s[i].rollno);
    printf("%f\n",s[i].m1);
    printf("%f\n",s[i].m2);
    printf("%f\n",s[i].m3);
    }
    return 0;
}