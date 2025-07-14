//calloc
#include <stdio.h>

#include <stdlib.h>

int main(){

int *marks,n;

printf("Enter the number of students: ");

scanf("%d",&n);

marks = (int *) calloc(n, sizeof(int));

for(int i = 0;i < n;i++){

printf("Enter the number of %d student: ",i+1); scanf("%d",&marks[i]);

}

for(int i = 0;i < n;i++){

printf("The number of %d student is: %d\n", i+1,marks[i]);



}

}
