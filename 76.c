//sorting
#include<stdio.h>
int main ()
{
  int marks[10]={98,45,76,89,45,65,78,54,87,90};
  int n = sizeof(marks)/sizeof(int);

  for (int i =0; i<n;i++)
  {
      for (int j= i+1;j<n;j++)
      {
          if(marks[i]>marks[j])
          {
              int temp = marks[i];
              marks[i]=marks[j];
              marks[j]=temp;
          }
      }
  }
  for(int i =0;i<n;i++)
  {
      printf("%dth element is %d\n",i+1,marks[i]);
  }






    return 0;
}

