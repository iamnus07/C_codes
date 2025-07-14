//macros

#include <stdio.h>

#include <math.h>

#define max(a,b) (a > b?a: b)

#define increment(a) (++a)

int main(){

printf("Enter two numbers: ");

int a,b;

scanf("%d %d",&a,&b);

printf("The max of two numbers are: %d\n",max(a,b));

printf("A & B after increment: %d %d\n", increment(a), increment(b));



}
