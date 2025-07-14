//call by value
#include<stdio.h>
int sum(int n)
{
    n++;
    return n;
}
int main()
{
   int a=3;
    printf("%d\n",sum(a));
    printf("%d",a);
    return 0;
}


