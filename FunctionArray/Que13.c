Que 13) WAP to accept 5 numbers from user and check entered number is even or odd
using of array

#include <stdio.h>
int main() {
    int numbers[5];
    printf("Enter %d numbers:\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nChecking even or odd:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Number %d is even.\n", numbers[i]);
        } else {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
    return 0;
}