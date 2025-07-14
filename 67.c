//digit count using recursion
#include <stdio.h>
int count =0; // global variable

int fun (int n)
{
    if (n==0)
    {
        return 0;
    }
    count++;
    return fun(n/10);

}
int main()
{
    int n =2344342;
    fun(n);
    printf("%d",count);
    return 0;
}

