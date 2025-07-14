//how to find length

#include<stdio.h>
int find_length(char string[])
{
    int i =0;
    int length =0;
    for (i=0;string[i] !='\0';i++)
    {
        length++;
    }
    return length;
}


int main ()
{
   char her_name[66] ;
   scanf("%s",her_name);
   int length = find_length(her_name);
   printf("the length of her name is :%d\n",length);

   return 0;
}
