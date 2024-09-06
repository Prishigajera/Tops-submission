//Que3) WAP to Find Area And Circumference of Circle

#include<stdio.h>
int main()
{
    float radious,circle,Circumference;
    printf("enter of radious: ");
    scanf("%f",&radious);
    circle = 3.14*radious*radious;
    printf("enter the circle : %f\n" ,circle);
    Circumference = 2* 3.14 * radious;
    printf("enter the Circumference : %f" ,Circumference);    
}
    
