// determinant check roots equal or not
#include<stdio.h>
#include <math.h>
int main()
{

    float a,b, c;
    scanf("%f %f %f",&a,&b ,&c);
    float det = b*b-4*a*c;
    if (det==0)
    {
        printf("roots are equal\n");
        printf ("X1=%f",-b/(2*a));
        printf ("X2=%f",-b/(2*a));
    }
   else if (det>0)
    {
        printf("roots are real but not equal\n");
        float X1 = (-b +sqrt(det))/(2*a);
        float X2 = (-b -sqrt(det))/(2*a);

        printf ("X1=%f",X1);
        printf ("X2=%f",X2);}
        else
        {
            printf("roots are img\n");
        }

        return 0;
}
