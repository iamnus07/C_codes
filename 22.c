#include<stdio.h>
int main()
{

    float a,b, c;
    scanf("%f %f %f",&a,&b ,&c);
    if((a==b)&&(b==c))
    {
        printf("equilateral\n");
    }
    else if((a==b)||(b==c)||(a==c))
    {
        printf("isoscelance\n");
    }
    else
    {
        printf ("scalence\n");
    }
    return 0;
}

