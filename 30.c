//1+2+3+4+5+6+6+7

#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    for (int i =1; i <=n;i++)
    {
        if(i<n)
       {
        printf("%d+",i);}
        else { printf ("%d",i);}
    }
    return 0;
}

