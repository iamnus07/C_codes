//display the exam result
#include<stdio.h>
int main()
{
    int number;
    printf("ENTER YOUR EXAM NUMBER=");
    scanf("%d",&number);
    if(number>=80)
    {
        printf("A+\n");
    }
    else if(number>=70)
    {
        printf("A\n");
    }
    else if(number>=60)
    {
        printf("A-\n");
    }
    else  { printf("fail");}
    return 0;
}
