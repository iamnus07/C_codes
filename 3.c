//input 2 number and display their sum ,subtraction ,div,

#include<stdio.h>
int main ()
{
    float a;
    float b;
    printf("ENTER YOUR FIRST NUMBER ");
    scanf("%f",&a);
    printf("ENTER YOUR SECOND NUMBER ");
    scanf ("%f",&b);
    float sum = a+b;
    printf("your sum is=%f\n",sum);
    float sub = a -b;
    printf("your subtraction is = %f",sub);
    float div = a/b;
    printf ("your div is=%f\n ",div);
    float  mul= a*b;
    printf ("your multiplication is=%f\n ",mul);
    int rem=a%b;
    printf ( "your rem is=%d\n",rem);
    return 0;
}
