//digit count
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int digit_count=0;
    int temp=n;
    for (int i =1; temp!=0;i++){
        temp/=10;
        digit_count++;
    } printf("%d",digit_count);
return 0;}
