//relation betwenn array and pointer

#include<stdio.h>
int main(){
 int x[4]={1,2,3,4};
for (int i =0; i<4; i ++){
    printf("ADDRESS OF %dth ELEMRNT is %p\n ",i+1,&x[i]);
}
printf("value of x : %p\n",x);

}
