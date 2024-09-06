// Que 5) Check Number Is Positive or Negative

#include<stdio.h>
int main()
{
    float number;
    printf("enter the number: ");
    scanf("%f",& number);
    if(number>0)
    {
        printf("number is positive: ");
    }else if (number<0)
    {
        printf("number is negative: ");
    }else
    {
        printf("number is 0: ");
    }
    return 0;
    
}


