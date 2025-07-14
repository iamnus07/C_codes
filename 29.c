//display nth number odd number

#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int odd=1;
    for (int i=1;i<=n;i++)
    {
      printf("%d\n",odd) ;
      odd+=2;
    }

    return 0;
}
