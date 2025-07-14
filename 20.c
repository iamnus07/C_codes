//buet addmisson test


#include<stdio.h>
int main()
{
    int phy,mat,che;
    scanf("%d %d %d",&phy,&mat,&che);
    if((phy>=55)&&(mat>65)&&(che>=50)&&(phy+che+mat==190))
    {
        printf("ELIGIBLE");
    }
    else if ((phy+mat)>=140)
             {
                 printf("ELIGIBLE");
             }
             else
                {
                    printf("NOT ELIGIBLE");
                }
    return 0;
}
