//pointer arithmetic how to increase
#include <stdio.h>
int main()
{
    int *p,a=10;
    p=&a;
    double *q,b=10.5;
    q=&b;
    char *r,c='r';
    r=&c;


    printf("size of int :%d byte\n",(int)sizeof(int));
    printf("p :%p\n",p);
    printf("p+1 :%p\n",p+1);
    printf("p+2 :%p\n",p+2);

    printf("size of double :%d byte\n",(int)sizeof(double));
    printf("q :%p\n",q);
    printf("q+1 :%p\n",q+1);
    printf("q+2 :%p\n",q+2);

    printf("size of char :%d byte\n",(int)sizeof(char));
    printf("r :%p\n",r);
    printf("r+1 :%p\n",r+1);
    printf("r+2 :%p\n",c+2);

}
