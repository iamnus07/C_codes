//access an array by dereferrencing

#include<stdio.h>
int main(){

  int x[6],y[6];
   printf("enter six element of x: ");
  for(int i=0; i<6; i++){
    scanf("%d",&x[i]);

  }
  for (int i =0;i<6; i ++){
    printf("%dth element is %d\n",i+1,*(x+i));
  }
    printf("enter six element of y: ");
    for(int i=0; i<6; i++){
    scanf("%d",y+i);}
    for (int i =0;i<6; i ++){
    printf("%dth element is %d\n",i+1,*(y+i));
  }
}

