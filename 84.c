//string compare
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
int string_compare(char str[],char str1[])
{
    for(int i=0; str[i]== '\0'||str1[i]=='\0';i++)
    {
        if(str[i]>str1[i])
        {
            return 1;
        }
        if(str[i]<str1[i])
        {
            return -1;
        }
    }

    if (find_length(str)>find_length(str1))return 1;
    else if(find_length(str)<find_length(str1))return -1;
    else return 0;
}
int main()
{
    char str[]="rupa";
    char str1[]="shuvo";
    int ans = string_compare(str,str1) ;
    printf("%d\n",ans);


    return 0;
}
