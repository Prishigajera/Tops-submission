//Que 26) (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>
int main() {
    int n;
    int totalSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int triangularNumber = 0;
        for (int j = 1; j <= i; j++) {
            triangularNumber += j;
        }
        totalSum += triangularNumber;
    }
    printf("The sum of the series is: %d\n", totalSum);
    return 0;
}
