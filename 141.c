//random number
#include <stdio.h>

#include<stdlib.h>

#include<time.h>

int main(){

time_t t;

srand((unsigned) time(&t));

for(int i = 0; i < 5;i++) {

printf("Random number: %d\n",rand());

}



}
