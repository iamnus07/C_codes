//write a c program to displaythe first n natural number using recursion

#include<stdio.h>

int fun(int n)
{
    if(n==100)
    {
        return 1;
    }
    printf("%d\n",n);
    fun(n+1);
}
int main ()
{
    int n=1;
    fun(n);
    return 0;
}
