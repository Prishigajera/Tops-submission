2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)

Ans)

#include<stdio.h>
int main()
{
    int number1 ,number2 ,addition ,subtraction ,
     multiplication,division,modulo;

    printf("Enter Number 1\n");
    scanf("%d", &number1);
    printf("Enter Number 2\n");
    scanf("%d", &number2);
    addition=number1 + number2 ;
    subtraction=number1 - number2;
    multiplication= number1 * number2;
    division= number1 / number2;   
    modulo= number1 % number2;
    printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",multiplication);
    printf("Division = %.2f\n",division);
    printf("modulo = %.2f\n",modulo);

    return 0;
}

