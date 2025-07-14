//ternary operator

#include <stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){

int a,b;

printf("Enter two numbers: \n");

scanf("%d %d",&a,&b);

int max = a>b ? a : b;

printf("The larger value between these two are: %d\n",max);}
