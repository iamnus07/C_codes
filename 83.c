//string concatenation

#include<stdio.h>
int main ()
{
    char str1[]="shuvo";
    char str2[]="rupa";
    char str3[100];
    int j =0;

    for (int i=0; str1[i]!='\0';i++)
    {
        str3[j]=str1[i];
        j++;
    }
    for (int i=0; str2[i]!='\0';i++)
    {
        str3[j]=str2[i];
        j++;
    }
    printf("%s\n",str3);
    return 0;

}
