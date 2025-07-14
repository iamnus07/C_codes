//dereferencing
// integer pointer p= int*p
//content of p =*p
#include<stdio.h>
#include<string.h>

int main()
{
    int x = 10 ;
    int*p=&x;
    printf("value of x is : %d\n",x);
    printf ("address of x is : %p\n",p);
    printf ("value of x is : %d\n",*p);
    *p=59;
    printf("value of x is %d\n",*p);
    printf("value of x is : %d\n",x);

    (*p)++;
    printf("value of x is : %d\n",x);
}

