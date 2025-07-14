//5 friend cg count using array;

#include<stdio.h>
int main ()
{
  double first[5] = {3.5,3.4,3.7,3.6,3.8};
  double second[5] = {3.5,3.4,3.7,3.6,3.8};
  double third [5]= {3.5,3.4,3.7,3.6,3.8};
  double fourth[5] = {3.5,3.4,3.7,3.6,3.8};
  double first_credit = 16, second_credit = 15, third_credit = 17 , fourth_credit = 13;

  int n = sizeof(first)/sizeof(double);

  for(int i =0;i<n;i++){

  double sum = first[i]*first_credit+second[i]*second_credit+third[i]*third_credit+fourth[i]*fourth_credit;
   double total_credit=first_credit+second_credit+third_credit+fourth_credit;
    double total_cg= sum/total_credit;
    printf("the cg of %dth person is %lf\n",i ,total_cg);}

                                      // i +1;









    return 0;
}

