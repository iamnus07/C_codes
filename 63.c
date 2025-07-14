//write a program in c to print the hello world 10 times using recursion
//recursion === loop;


#include<stdio.h>


int printhello(int n)
{
    if(n==0)
    {
        return 1;
    }
    printf("umme haiba islam rupa\n");
    printhello(n-1);
}
int main()
         {
             int n = 10;
             printhello(n);
             return 0;
         }

