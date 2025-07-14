//pointer arithmetic advanced
#include <stdio.h>

#include <stdlib.h>

int main(){

int **ara;

int row,col;

printf("Enter the row: ");

scanf("%d",&row);

printf("Enter the column: ");

scanf("%d",&col);

ara = (int **) malloc(sizeof(int *)*row);

for(int i = 0; i < row;i++){

ara[i] = (int *)malloc(sizeof(int)*col);

}

for(int i = 0; i < row; i++) {

for(int j = 0; j < col;j++) {

scanf("%d",&ara[i][j]);

}

}

for(int i = 0; i < row; i++){

for(int j = 0; j < col;j++) {

printf("%d ",((ara+i)+j));

}

}

printf("\n");

}


