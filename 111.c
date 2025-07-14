/*tomar schooler class 1 theke 5 porjonto kono
classe koyjon student ache ta tumi janona teacher er kach theke jene input inte hobe
koyjon ache ebong tader marks*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *marks[5];
    int n[5];
    for (int i =0; i<5; i++)
    {
        printf("PLEASE ENTER THE NUMBER OD STUDENT IN CLASS%d:, ",i+1);
        scanf("%d",&n[i]);
        marks[i]= (int*)malloc (sizeof(int)* n[i]);

    }

    for(int j =0; j<5;j++){
        printf("enter marks of each student each class %d",j+1);
        for(int i =0; i <n[i]; i ++){
        scanf("%d",&marks[i][j]);}
    }
    for (int j =0; j <5; j++){
        printf("MARKS OF EVERY STUDENT IN CLASS %d is printted bellow\n", j+1);
        for(int i = 0; i <n[i]; i ++){
            printf("number of student %d is : %d",i+1,marks[j[i]);
        }

    }
    for(int i =0;i<5; i ++){
        free (marks[i]);
    }
