//pointer arithmetic advancd
#include <stdio.h>

#include <stdlib.h>

int main(){

int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
printf("*arr+7 is %d\n",arr+7);
printf("(arr+4) is %d\n",(arr+4));
printf("(arr+1) is %d\n",(arr+1));
 printf("((arr+2)+1) is %d\n",((arr+2)+1));
 printf("((arr+1)+4) is %d\n",(*(arr+1)+4));}
