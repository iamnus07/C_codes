//fibonacci series using recursion
#include <stdio.h>
int fib (int n)
{
    if(n==1)
    {
        return 1;
    }
    if (n==0){
        return 0;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n =6;
    int f=fib(n);
    printf("%d",f);
    return 0;
}
