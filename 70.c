//array basics
#include<stdio.h>
int main ()
{ int number=10;
printf("%d\n",number);
 //how to declare an array;

 int numbers [10] = {231,2,34,34,324,4,32,3,3,4};
 double array [5] = {1.2,13.4,23.53,23.4};
  int numbers2 [5];
  int numbers3 [5]={0};
  int numbers4 [] = {1,2,3,4};


  // how to accces;
  printf("%d\n",numbers3[3]);

//how to iterate
 for (int i=0; i<10; i++){

    printf("%d\n",numbers[i]);
}
//changing value of an array
for (int i=0; i<5; i++){

    numbers3[i]+=10;
    printf("%d\n",numbers3[i]);
}
//how to see size
int n = sizeof(numbers3)/sizeof(int);
for (int i=0; i<n; i++){

    numbers3[i]+=10;
    printf("%d\n",numbers3[i]);}

//how to see double size array;
int double_array_size=sizeof(array)/sizeof(double);
printf("%d\n",double_array_size);
for(int i =1;i<double_array_size;i++)
{
    printf("%lf\n",array[i]);
}







  /*double first = 3.5, second = 3.7, third = 3.8, fourth = 3.6;
  double first_credit = 16, second_credit = 15, third_credit = 17 , fourth_credit = 13;
  double sum = first*first_credit+second*second_credit+third*third_credit+fourth*fourth_credit;
   double total_credit=first_credit+second_credit+third_credit+fourth_credit;
    double total_cg= sum/total_credit;
    printf("YOUR CG=%lf",total_cg);*/











    return 0;
}

