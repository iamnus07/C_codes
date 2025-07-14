//pointer of pointer
#include<stdio.h>
int main()
{
    int a= 10;
    int*p=&a;
    int **q=&p;


    printf("value of a:%d\n",a);
    printf("address of a: %p\n",&a);
    printf("value of p:%p\n",p);
    printf("address of p: %p\n",&p);
    printf("content of p:%d\n",*p);
    printf("value of q:%p\n",q);
    printf("address of q: %p\n",&q);
    printf("content of q:%d\n",*q);
    printf("content of *q:%d\n",**q);



}
