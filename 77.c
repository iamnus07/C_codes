//binary search
#include<stdio.h>
int main ()
{
  int marks[10]={98,45,76,89,45,65,78,54,87,90};
  int n = sizeof(marks)/sizeof(int);

  for (int i =0; i<n;i++)
  {
      for (int j= i+1;j<n;j++)
      {
          if(marks[i]>marks[j])
          {
              int temp = marks[i];
              marks[i]=marks[j];
              marks[j]=temp;
          }
      }
  }
  for(int i =0;i<n;i++)
  {
      printf("%dth element is %d\n",i+1,marks[i]);
  }

    int key =98;
    int right=9;
    int left= 0;
    int flag=0;

    while(left<=right)
    {
        int mid = (left+right)/2;
        if (key==marks[mid])
        {
            flag =1;
            break;
        }
        else if (key>marks[mid])
        {
            left=mid+1;
        }
        else if (key<marks[mid])
        {
            right= mid-1;
        }
    }
    if(flag==1)
    {
        printf("%d is found\n",key);

    }
    else { printf("%d not found\n",key);}





    return 0;
}


