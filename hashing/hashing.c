#include<stdio.h>
#include<stdlib.h>
#define size 3
int arr[size];

void init()
{
   for(int i=0;i<size;i++)
   {
      arr[i] = -1;
   }
}
void insert( int value)
{
   int key = value % size;
   if(arr[key] == -1)
   {
      arr[key]=value;
      exit(1);
   }
   else{
      printf("collision : the value %d is alredy present %d",value,arr[key]);
      printf("unable to store");
   }
}
void print()
{
   for(int i=0;i<size;i++)
   {
      print("%d",arr[i]);
   }
   print("\n");
}
int main()
{
    init();
    insert(10);
    insert(6);
    insert(8);
    

    print();
    printf("\n");
  return 0;
}