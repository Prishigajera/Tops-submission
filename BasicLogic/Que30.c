Que 30) WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    float year,day,year_into_day,day_into_year;
    printf("enter the year : ");
    scanf("%f",&year);
    day_into_year = year*365;
    printf("day is :%.2f\n\n",day_into_year);
    printf("enter the day : ");
    scanf("%f",&day);
    year_into_day = day/365;
    printf("year is : %.2f",year_into_day);
    return 0;
}
