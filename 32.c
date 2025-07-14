//prothom 5 ta odd er jogful

#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int sum=0;
    int odd=1;
    for (int i =1; i <=n;i++)
    {
        sum+=odd;
        odd+=2;
    }
    printf("%d",sum);
    return 0;
}
