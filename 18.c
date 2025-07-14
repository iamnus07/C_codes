//input 3 number and check the greatest number / smallest number / nested if else


#include<stdio.h>
int main()
{
    int a ,b ,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("greatest number is =%d",a);
        }
    }
    else if (b>c)
    {
        printf( "greatest number is=%d",b);
    }
    else
    {
        printf("greatest number is =%d",c);
    }

    return 0;
}
