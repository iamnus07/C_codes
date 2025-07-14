    //***** bill count***


#include<stdio.h>
#include<math.h>
int main()
{
    float used_unit, total_bill;
    scanf("%f",&used_unit);
    float unit_price;
    if (used_unit <200)
    {
       unit_price=1.5;
    }
    else if (used_unit<400)
    {
    unit_price=1.5;
    }
    else if (used_unit<600)
    {
        unit_price =1.8;
    }
    else{
        unit_price=2;
    }
    total_bill=unit_price*used_unit;
    float charge ;
    if (total_bill>=400)
    {
        charge=total_bill*0.15;
    }
    total_bill+=charge;
    if (total_bill<100){
        total_bill=100;
    }
    printf("total use : %f\n",used_unit);
    printf("unit charge : %f\n",unit_price);
    printf(" sub charge: %f\n",charge);
    printf(" total bill: %f\n",total_bill);
    return 0;



}
