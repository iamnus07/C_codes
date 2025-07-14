// input a 2 digit number and display their multiplication;

#include<stdio.h>
int main ()
{
    int rupa;
    scanf("%d", &rupa);
    int shuvo1 =rupa/10;
    int shuvo2 = rupa%10;
    printf("total multiplication %d",shuvo1*shuvo2);
    return 0;

}


