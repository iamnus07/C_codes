//enter height and width and show their area and perimeter

#include<stdio.h>
int main ()
{

    float height , width;
    printf ("please enter your height");
    scanf("%f",&height);
    printf ("please enter your width");
    scanf (" %f",&width);
    float area = height*width;
    float per= 2*(height + width);
    printf ("your area is = %f\n",area);
    printf ( " your perimeter is = %f", per);
    return 0;

}
