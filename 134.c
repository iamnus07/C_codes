/*তোমার ভার্সিটির সব স্টুডেন্টদের ডাটা রাখার জন্য
একটা ডাটা টাইপ ক্রিয়েট করতে হবে।
ডাটা টাইপে সবার মার্কস এবং গ্রেড রাখো মার্কস অনুযায়ী গ্রেড দাও।
 */
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct{
char first [20];
char last[20];}
nametype ;
typedef struct {
int id;
nametype name;
int marks ;
char grade [3];
}studenttype;

void calculate_grade(studenttype*s) {




if(s->marks >= 80) strcpy(s->grade, "A+");

else if(s->marks >= 70) strcpy(s->grade, "A");
else if(s->marks >= 60) strcpy(s->grade, "A-");
else if(s->marks > 50) strcpy(s->grade, "B");
else if(s->marks >= 48) strcpy(s->grade, "C");

else strcpy(s->grade, "F");}

int main(){
studenttype students[5];
for(int i=0;i <5;i++){



printf("Enter the id of the %dth student: ",1+1);
scanf("%d",&students[i].id);

printf("Enter the first name of the %dth student\n: ",i+1);
scanf("%s", students[i].name.first);


printf("Enter the last name of the dth student: ",i+1);
scanf("%s", students[i].name.last);

printf("Enter the marks of the %dth student: ",i+1);

scanf("%d",&students[i].marks);

calculate_grade(&students[i]);

for(int i=0;i < 5;i++){

printf("Id of the %dth student: %d\n", i+1, students[i].id);

printf("Name of the %dth student: %s %s\n",i+1, students[i].name.first, students[i].name.last);

printf("Marks of the %dth student: %d\n", i+1,students[i].marks);

printf("Grade of the %dth student: %s\n", i+1,students[i].grade);

}

}
}
