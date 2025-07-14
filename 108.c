//passing adress as parameters
#include<stdio.h>
void swap (int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    int a =10, b =20;
    swap(&a,&b);
    printf("a is %d\n",a);
    printf("b is %d\n",b);



}
