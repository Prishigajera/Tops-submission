//Que 10) WAP to perform Palindrome number using for loop and function

#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
        for (; num > 0; num /= 10) {
        reversed = reversed * 10 + num % 10;
    }
    return reversed;
}
int main() {
    int number, reversedNumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    reversedNumber = reverseNumber(number);
    if (number == reversedNumber) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
