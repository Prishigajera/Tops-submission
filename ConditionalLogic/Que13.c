//Que 13) WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter one numbers: ");
    scanf("%d",&a);
    printf("Enter two numbers: ");
    scanf("%d",&b);
    printf("Enter three numbers: ");
    scanf("%d",&c);

    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("The minimum number is: a<b %d\n", min);
    printf("The minimum number is: a<c %d\n", min);
    printf("The minimum number is: a<c %d\n", min);
    
    return 0;
}



