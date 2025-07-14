//array address

#include<stdio.h>
#include<string.h>

int main()
{
  int arr[5]={1,2,3,4,5};
  for (int i =0;i<5;i++){
    printf("value of %dth element is %d\n",i+1,arr[i]);
    printf("address of %dth element is %p\n",i+1,&arr[i]);
  }
}


