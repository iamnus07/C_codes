//how to convert uppercase

#include<stdio.h>
int find_length(char string[])
{
    int i = 0;
    int length = 0;
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    return length;
}





int main()
{
  char her_name[1000] ;
  scanf("%s",her_name);
  int length= find_length(her_name);

  for (int i = 0;i<length;i++)
  {
      if(her_name[i]>='a'&&her_name[i>='z'])
      {
          her_name[i]+='A'-'a';
      }
  }
  printf("her name in capital letter : %s\n",her_name);
  return 0;
}
