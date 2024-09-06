Que 22) Accept 3 numbers from user using while loop and check each numbers
palindrome

 Ans)   

 #include <stdio.h>
int isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int num, count = 0;
    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (isPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }
    return 0;
}
