//2D array
#include<stdio.h>
#include<string.h>
int main ()
{
    //declaleration
    int arr[4][4]={{1,2,3,4,},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    int arr2[3][3];

    // how to loop and access
    for(int i =0;i<4;i++)
    {
       for (int j=0;j<4;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");}

       //singel element access
       printf("%d\n",arr[1][2]);

       // how to input

    for(int i =0;i<3;i++)
    {
       for (int j=0;j<3;j++)
       {
           scanf("%d\n",&arr2[i][j]);

       }
       }
       for(int i =0;i<3;i++)
    {
       for (int j=0;j<3;j++)
       {
           printf("%d ",arr2[i][j]);
       }
       printf("\n");}



    return 0;

}
