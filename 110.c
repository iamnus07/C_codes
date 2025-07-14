//dynamic free allocation


#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *marks;
    int n;
    printf("PLEASE ENTER THE NUMBER OF THE STUDENTS : ");
    scanf("%d",&n);
    marks =(int *)malloc (sizeof(int)*n);
    printf("ENTER THE MARK OF STUDENT \n");
    for(int i =0;i <n;i++)
    {
        scanf("%d",&marks[i]);

    }
    printf("MARKS OF EVERY STUDENT IS PRINTED BELLOW:\n");
    for(int i=0; i<n; i++){
        printf("%dth student result is :%d \n " ,i+1,marks[i]);
    }
    free(marks);
}

