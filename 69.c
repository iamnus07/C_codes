// input your 4 semester cg and count your running cg

#include<stdio.h>
int main ()
{
  double first = 3.5, second = 3.7, third = 3.8, fourth = 3.6;
  double first_credit = 16, second_credit = 15, third_credit = 17 , fourth_credit = 13;
  double sum = first*first_credit+second*second_credit+third*third_credit+fourth*fourth_credit;
   double total_credit=first_credit+second_credit+third_credit+fourth_credit;
    double total_cg= sum/total_credit;
    printf("YOUR CG=%lf",total_cg);











    return 0;
}
