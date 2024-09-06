Que 23) WAP to calculate swap 2 numbers with using of multiplication and division.
 
#include <stdio.h>
int main()
 {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("swap the first number: %d\n",num1 );
    printf("swap the second number:%d\n",num2 );
    return 0; 
 }
   
       
      




















      