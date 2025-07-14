//array reversing

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};

    //int n = sizeof (arr)/sizeof(int);

   // for (int i =0 , j=n-1;i<=n/2;i++,j--)
      for (int i =0 , j=4;i<=4/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i =0; i<5;i++)//khotka
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}

