//write a c program to find the sum of digit of a number using recursion


#include<stdio.h>

int fun(int n)
{
    if(n<10)
    {
        return n;
    }
    return fun(n/10)+(n%10);

}
int main ()
{
    int n=235434;
    int sum = fun(n);
    printf("%d",sum);
    return 0;
}
