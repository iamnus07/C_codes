/*tonmoy likes a beautiful value , beautiful numbers are made by the sum of its all
the integers square value , suppose if a number is 3204 thrn the beautiful
value is 3*3 + 2*2+0*0+4*4=34. take a input of a integer and print the beautiful
value*/
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int temp = n;
    int beautiful=0;
    int x;
    while(temp!=0){
        x= temp%10;
        temp = temp/10;
        beautiful+=x*x;
    }
    printf("%d",beautiful);


return 0;}
