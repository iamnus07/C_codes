//1 to 10000 amostrong number ;

#include<stdio.h>
#include<math.h>
int main()
{
    for (int n=1; n<=10000;n++)
    {

    int rupa=0;
    int temp=n;
    while(temp!=0)
    {
        temp/=10;
        rupa++;
    }
    printf("%d",rupa);
    temp =n;
    int sum=0;
    while(temp!=0)
    {
       int x=temp%10;
       temp/=10 ;
       sum+=(int)pow(x,rupa);
    }
    if(n==sum)
    {
        printf("%d \n",sum);
    }}
    return 0;
}

