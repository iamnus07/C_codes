//write a c program to print 2,4,6,16,32,64 up to n termas
#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int temp=2;
    //int sum = 0;
    for (int i =1; i<=n;i++)
    {
        printf("%d,",temp);
          //sum+=temp;
          temp*=2;

          }
    return 0;
}
