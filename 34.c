//write a c program calculate the sum given series until nth terms 1 1*1+ 2*2 +..
#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int sum =0;
    for (int i =1; i<=n;i++)
    {
        sum+=(i*i);
    }
    printf("%d",sum);
    return 0;
}

