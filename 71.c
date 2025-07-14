//array coping
#include<stdio.h>
int main()
{
  int array1[5]= {1,2,3,4,5} ;
  int array2[5];
  int n1= sizeof(array1)/sizeof(int);
  int n2= sizeof(array2)/sizeof(int);

  for(int i=0; i<n1;i++) {

    array2[i]=array1[i];
  }
  for(int i =0; i<n2 ; i++)
  {
      printf("%dth element of array 2;%d\n",i+1,array2[i]);
  }
}
