//function pointer

#include<stdio.h>

int add(int n1,int n2)
{
    return n1+n2;
}
int sub(int n1,int n2)
{
    return n1-n2;
}
int main (){
   int (*fun)(int ,int);
   int n1 =10,n2=45;
   fun =&add;
   printf("result :%d\n",fun(n1,n1));
   fun =&sub;
   printf("result :%d\n",fun(n1,n1));
   }
