Que 26) Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    printf("enetr the Fahrenheit:  ");
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit-32)*5/9;
    printf("enter the  Celsius: %f",Celsius);
    return 0;
}