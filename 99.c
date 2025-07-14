//prime number

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for (int j =2; j<=n;j++)
    {
        int temp=0;
        for (int i=2;i <j;i++){
          if(j%i==0){
            temp =1;
        }
    }
    if(temp==0){
        printf("%d \n",j);
    }
    }

 return 0;
}
