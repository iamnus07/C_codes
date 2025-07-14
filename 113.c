/*তোমার স্কুল কোন ক্লাস পযন্ত আছে তাও তুমি জানো না এবং কোন
 ক্লাস এ কয়জন শিক্ষার্থী আছে তা তুমি জানো না টিচার এর কাছ থেকে জেনে
 ইনপুট নিতে হবে কয়টি ক্লাস আছে কোন ক্লাসে কয়জন আছে এবং তাদের মার্কস।
 তোমার টিচার এর জন্য একটি প্রোগ্রাম লিখে দাও।*/
 #include <stdio.h>

#include <stdlib.h>

int main(){

int marks, num[12];

int classes;
printf("Enter the number of classes: \n");

scanf("%d",&classes);

marks = (int *)malloc(sizeof(int *)*classes);

for(int i = 0; i < classes;i++){

printf("Enter the number of students in class d: An ",i+1); scanf("%d",&num[i]);

marks[i] = (int *)malloc(sizeof(int)  * num[i]);

}

for(int i = 0; i < classes;i++){

printf("Enter the marks of students in class %d: \n",i+1);

for(int j = 0; j < num[i]; j++){

scanf("%d",&marks[i][j]);

}

} for(int i = 0; i < classes;i++){

printf("The marks of class d is: \n",i+1); for(int j=0;j<num[i];j++){

printf("%d ",marks[i][i]);

}
printf("\n");

for(int i = 0; i < classes;i++){

free(marks[i]);

free(marks);
}
