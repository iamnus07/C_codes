//ternary operator
#include <stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){

int a,b,c;

printf("Enter three numbers: \n");

scanf("%d %d %d",&a,&b,&c);

int max = c > (a>b?a : b)?c: (a>b?a : b);



printf("The larger value between these three are: %d\n",max);}
