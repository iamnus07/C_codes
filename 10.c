//input days and display  years, months,days, similar practice input second display hour, minute ,and second

/*#include <stdio.h>
int main ()
{
    int total_days ;
    printf("PLEASE ENTER YOUR TOTAL DAYS  " );
    scanf("%d",&total_days);
    int years, months,days;
    years= total_days/365;
    total_days= total_days%365;
    months = total_days/30;
    days = total_days%30;
    printf("YOUR TOTAL YEARS =%d\n",years);
    printf("YOUR TOTAL MONTHS =%d\n",months);
    printf("YOUR TOTAL DAYS =%d\n",days);
    return 0;
}*/

#include<stdio.h>
int main ()
{
    int total_days ;
    printf ("ENTER YOUR TOTAL DAYS");
    scanf("%d",&total_days);
    int monts,years,days;
    years=total_days/365;
    total_days=total_days%365;
    monts = total_days/30;
    days = total_days%30;
    printf ("your  total years=%d\n",years);
     printf ("your  total monts=%d\n",monts);
      printf ("your  total years=%d\n",days);
      return 0;

}
