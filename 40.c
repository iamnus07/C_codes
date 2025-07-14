//prime number
#include<stdio.h>
int main ()
{
    int n,i;
    int temp=0;
    scanf("%d",&n);
    for (int i=2; i <n; i++)
    {

if(n%i==0){
    temp =1;
}

        if(temp==1)
        {
            printf("non prime");
        }
        else
        {
            printf("prime!");
        }
    }
    return 0;}

