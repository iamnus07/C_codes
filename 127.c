//odd even check with and operator

#include<stdio.h>

int main(){

int n;

printf("Please Enter a number: ");

scanf("%d",&n);

if(n & 1){

printf("%d is odd\n",n);

}

else{

printf("%d is even\n",n);

}

}
