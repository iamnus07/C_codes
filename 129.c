// check if power of 2
#include<stdio.h>
int main ()
{
    int n ;
    printf ("please enter a number ;");
    scanf("%d",&n);
    if(n&(n-1))
    {
        printf("the number is not power of 2.\n");
    }
    else{printf("the number is a power of 2");}
    return 0;
}
