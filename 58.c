//factorial for  first 10 number

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
   for(int i=1;i<=10;i++)
   {
      printf("%d\n",fact(i));
   }


  return 0;

}


