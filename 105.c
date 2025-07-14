//void pointers
#include<stdio.h>
int main ()
{
    void *vp;
    int n =10;
    vp=&n;
    printf("adress of n: %p\n",&n);
    printf("value of n: %p\n",vp);
    //wrong
    //printf("contennt of vp: %p\n",*vp);
    printf("contennt of vp: %p\n",*(int*)vp);


}
