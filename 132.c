//taking  input full name first and last name
#include <stdio.h>

#include <string.h>

struct nametype{

char first[20];

char last[20];

};

struct student{

int id;

struct nametype name;

};

int main(){

struct student one;

printf("Enter the id of the student: ");

scanf("%d",&one.id);

printf("Enter the first name of the student: ");

scanf("%s",one.name.first);

printf("Enter the last name of the student: ");

scanf("%s", one.name.last);

printf("Id of the student: %d\n",one.id);

printf("Name of the student: %s %s\n",one.name.first,one.name.last);

}

