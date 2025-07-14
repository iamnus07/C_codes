//swap without temp
#include <stdio.h>

#include <math.h>

int main(){

printf("Enter two numbers: ");

int a,b;

scanf("%d %d",&a,&b);

a = a + b;

b = a - b;

a = a - b;

printf("A & B after swap : %d %d\n",a,b);

}
