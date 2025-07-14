//calculate time
#include <stdio.h>

#include<time.h>

int main(){

clock_t start_time,end;

double time_elapsed;

start_time = clock();

int a = 0;

for(int i = 0; i < 1000000000;i++){

}

a++;

}

end = clock();

time_elapsed = (double) (end_time-start_time)/CLOCKS_PER_SEC;

printf("The time taken by this program is: %f\n",time_elapsed);}
