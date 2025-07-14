//array of struct
#include <stdio.h>

#include <string.h>

struct nametype{
char first[20];

char last[20];};

struct student{

int id;

struct nametype name;};

int main(){

struct student students[5];

for(int i=0;i < 5;i++){

printf("Enter the id of the %dth student: ",i+1);

scanf("%d", &students[i].id);

printf("Enter the first name of the %dth student: ",i+1);
       scanf("%s", students[1].name.first);

printf("Enter the last name of the %dth student: ",i+1);

scanf("%s", students[i].name.last);

}
for(int i=0;i < 5;i++){

printf("Id of the %dth student: %d\n", i+1, students[i].id);

printf("Name of the %dth student: %s \n", i+1, students[i].name.first, students[i].name.last);



}}
