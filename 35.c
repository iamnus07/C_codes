//take input of n different number and calulate the number of even and odd those input

/*#include<stdio.h>
int main ()
{

    int n ;
    scanf("%d",&n);
    int x;
    int even_count=0;
    int odd_count=0;
    for (int i =1; i<=n; i ++){
       scanf("%d",&x) ;
       if(x%2==0){
        even_count++;
       }
       else{
        odd_count++;
       }
    }
    printf("even=%d , odd=%d",even_count,odd_count);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n ;
    printf("please input your number how you calculate",n);
    scanf("%d",&n);
    int x=0;
    int even_count=0;
    int odd_count= 0;
    for(int i =1; i<=n; i ++)
    {
        printf("%d th number\n",i);
        scanf("%d",&x);
        if(x%2==0)
        {
            even_count++;

        }
        else {
        odd_count++ ; }

    }
    printf("even=%d ,odd=%d",even_count,odd_count);

return 0;}

