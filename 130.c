//struct
#include<stdio.h>
struct studenttype{
      int id;
      char *name;};

      int main(){

      struct studenttype student_one;
      student_one.id = 40;
      student_one.name = "umme habeba islam rupa";
      printf("the id of the student is %d\n",student_one.id) ;
      printf("the name of the student is %s\n",student_one.name) ;

      //how to input
      printf("enter the id of student:");
      scanf("%d",student_one.id);
      printf("the id of the student is %d\n",student_one.id) ;
      printf("enter the name of student :");
      scanf("%s",student_one.name);
      printf("the name of the student is %s\n",student_one.name); }
