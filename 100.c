//array input with pointer

#include<stdio.h>
int main(){

  int x[4],y[4];
  printf("enter four element : ");
  for(int i=0; i<4; i++){
    scanf("%d",&x[i]);

  }
  for (int i =0;i<4; i ++){
    printf("%dth element is %d\n",i+1,x[i]);
  }
    printf("enter four element of: ");
    for(int i=0; i<4; i++){
    scanf("%d",&y[i]);}
    for (int i =0;i<4; i ++){
    printf("%dth element is %d\n",i+1,y[i]);
  }
}
