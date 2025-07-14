//2D array
#include<stdio.h>
int main ()
{
    int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
// how to input
int arry2[3][3];
for(int i =0;i<3;i++){
    for(int j =0; j<3;j++){
        scanf("%d",&arry2[i][j]);
        printf("%d ",arry2[i][j]);
    }printf("\n");
}

    //how to access 8 or any number :
    printf("%d\n",arr[2][1]);

    //how to change:
    arr[1][1]=0;

    //how to iterate:
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++){

        printf("%d ",arr[i][j]);}

    printf("\n");}


return 0;}
