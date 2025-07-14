// sum of n natural number using recursion
#include<stdio.h>

int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    return fun(n-1)+n;

}
int main ()
{
    int n=50;
    int sum = fun(n);
    printf("%d",sum);
    return 0;
}
/*f(5)
f(4)+5 // work of f(5)
f(3)+4 // work of f(4)
f(2)+3 //work of f(3)*/

