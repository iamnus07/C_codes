//factorial

#include<stdio.h>
int fact(int x)
{
   int fact=1;
    for(int i=1;i<=x;i++)
    {
      fact*=i;
    }
    return fact;
}



int main ()
{
   int n=5;
   printf("%d",fact(n));

  return 0;}
