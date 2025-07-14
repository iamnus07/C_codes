//leaf year

#include<stdio.h>
int main()
{
    int year;
    printf("enter your year");
    scanf("%d",&year);
    if(( year%400==0)||(year%100!=0)&&(year%4==0))
    {
        printf("leaf year");

    }
    else
    {
        printf("not leaf year");
    }
    return 0;
}
