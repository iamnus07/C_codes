//sorting and searching
//linear search
#include<stdio.h>
int main ()
{
  int friends [10]={45,34,56,78,98,76,54,32,77,88};
  int key = 44;
  int n = sizeof(friends)/sizeof(int);
  int i =0;

  for ( i=0;i<n;i++)
  {
     if(friends[i]==key)//10
     {
       printf("%d found\n",key);
       break;
     }
  }
  if(i ==10)
  {
      printf("%d not found\n",key);
  }






    return 0;
}

