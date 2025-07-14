#include <stdio.h>
#include <stdlib.h>

int main(){

int *marks[5];

int n[5];

for(int i = 0; i < 5;i++){

printf("Please Enter the number of the students in class %d: ",i+1);

scanf("%d",&n[i]);

marks[i] = (int *) malloc(sizeof(int) *n[i]);

}

for(int j = 0; j < 5;j++){

printf("Enter mark of Each student in class %d \n",j+1);

for(int i = 0; i < n[i];i++){

scanf("%d",&marks[j][i]);

}

}

for(int j = 0; j < 5;j++){

printf("Marks of every student in class d is printed below: \n",j+1);



 for(int i = 0;i < n[i]; i++){



printf("Number of student-%d is: %d\n",i,marks[j][i]);

}

for(int i = 0; i < 5;i++){

free(marks[i]);

}}}


