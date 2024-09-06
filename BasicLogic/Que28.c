Que 28) Convert years into days and months

#include<stdio.h>
 int main()
 {
     float years,days,months;
     printf("enter the years: ");
     scanf("%f",& years);
     days= years*365;
     months= years*12;
     printf("enter the days: %f\n",days);
     printf("enter the months: %f",months);
     
 }