//amostrong number;

#include<stdio.h>
#include<math.h>
int main()
{
    int n=153;
    int rupa=0;
    int temp=n;
    while(temp!=0)
    {
        temp/=10;
        rupa++;
    }
    printf("%d\n",rupa);
    temp =n;
    int sum=0;
    while(temp!=0)
    {
       int x=temp%10;
       temp/=10 ;
       sum+=(int)pow(x,rupa);
    }
    printf("%d",sum);
    return 0;
}
