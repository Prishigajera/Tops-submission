Que 25) Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
    float exp1, exp2, exp3, exp4, exp5,average;
    printf("enter the exp1: ");
    scanf("%f",&exp1);
    printf("enter the exp2: ");
    scanf("%f",&exp2);
    printf("enter the exp3: ");
    scanf("%f",&exp3);
    printf("enter the exp4: ");
    scanf("%f",&exp4);
    printf("enter the 5: ");
    scanf("%f",&exp5);
    average =( exp1+exp2+ exp3+ exp4+ exp5)/5;
    printf("enter the average: %f",average);
    
    
}