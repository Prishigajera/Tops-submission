Que 32) Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
   int num1,num2,sum;
   printf("enter the number1 : ");
   scanf("%d",&num1);
   printf("enter the number2 : ");
   scanf("%d",&num2);
   sum = num1 +num2;
   printf("sum is :%d\n",sum);
   printf("size is :%d",sizeof(sum));
   
   
    return 0;
}
