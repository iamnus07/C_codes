//last corner
#include<stdio.h>
int main ()
{
    for (int i=1; i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {

            if(i==3&&j==3)
            {
                printf("1 ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
return 0;}

