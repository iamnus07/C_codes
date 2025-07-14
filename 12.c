// input a 4(2456) digit number and display their like 2,4,5,6,

#include<stdio.h>
int main ()
{
    int rupa;
    scanf("%d",&rupa);
    int shuvo1=rupa/1000;
    rupa =rupa% 1000;
    int shuvo2=rupa/100;
    rupa =rupa%100;
    int shuvo3= rupa/10;
    int shuvo4= rupa %10;
    printf("%d\n",shuvo1);
    printf("%d\n",shuvo2);
    printf("%d\n",shuvo3);
    printf("%d\n",shuvo4);
    return 0;

}
