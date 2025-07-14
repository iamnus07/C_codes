//switch case
#include<stdio.h>
#include<string.h>
int main(){

int no_of_day = 3;

printf("Today is %dth day of the week\n",no_of_day);

char day_name[10];

switch (no_of_day) {

case 1:

strcpy(day_name, "Saturday");

break;

case 2:

strcpy(day_name, "Sunday"); break;

case 3:

strcpy(day_name, "Monday"); break;

case 4:

strcpy(day_name, "Tuesday"); break;

case 5:

strcpy(day_name, "Wednesday"); break;

case 6:

strcpy(day_name, "Thursday"); break;

case 7:

strcpy(day_name, "Friday"); break;

default:

break;

} printf("So, today is %s\n",day_name);

}
