/* write a c program to compute the cosine of x the user should supply
x and a positive integer n, we compute the cosine of x using the series
and computation should we all terms in the series up through the term involving x;*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n =6;
  int x=34;
  float sum=1;
  int sign =-1;
  for(int i =2;i<=n; i+2)
  {
     int fact=1;
     for(int j = 1; j<=i;j++)
     {
         fact=fact*j;
     }
     sum +=sign*pow(x,i)/fact;
     if(sign==-1)
     {
         sign=1;
     }
     else{sign=-1;}
     printf("%f",sum);

  }

  return 0;
}
