  //string
#include<stdio.h>

    //declaration
    char name[7]={'r','u','p','a'};//joto word hobe stringlength 1 beshi hobe cause null caracter thake
    char name1[6]="shuvo";
    char name2[]="rupa";


    //printf("%s\n",name2);

    //iterate and access
//    for(int i=0;i<7;i++)
    //{
        //printf("%c",name[i]);
   // }
    //how to get input line input
    //char str[1000];
    //gets (str);
    //string input neoyar somoy & use kora lage na
    //printf("%s\n",str);

//find length

int a=10;
int find_length (char str[])
{
    int length=0;
    for (int i = 0;str[i]=='\0';i++){
     length++; }
     return length;
}
int main()
{
    char name[100]="umme haiba islam rupa";
    int length = find_length(name);
    printf("%d\n",length);






    return 0;
}

