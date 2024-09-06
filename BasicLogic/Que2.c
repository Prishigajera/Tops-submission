2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)

#include<stdio.h>
int main()
{
    int num1,num2,Add, Sub,Mult, Div, Mod;
    printf("enter first number: ");
    scanf("%d",& num1);
    printf("enter second number: ");
    scanf("%d",& num2);
    Add= num1+num2;
    Sub= num1-num2;
    Mult= num1*num2;
    Div= num1/num2;
    Mod= num1%num2;
    printf("enter the Add: %d\n",Add);
    printf("enter the Sub: %d\n",Sub);
    printf("enter the Mult: %d\n",Mult);
    printf("enter the Div: %d",Div);
    printf("enter the Mod: %d",Mod);
    
}