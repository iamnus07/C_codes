// input

#include <stdio.h>

#include <string.h>

struct student{

int id;

char name[40];

};

int main(){

struct student one;

printf("Enter the id of the student: ");

scanf("%d",&one.id);

printf("Enter the name of the student: ");

scanf("%s", one.name);

printf("Id of the student: %d\n",one.id);
printf("Name of the student: %s\n",one.name);

}
