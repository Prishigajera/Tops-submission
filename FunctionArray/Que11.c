Que 11) WAP to accept 5 numbers from user and display in reverse order using for
loop and array


#include <stdio.h>
int main() {
    int numbers[5];
    printf("Enter %d numbers:\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Numbers in reverse order:\n");
    for (int i = 5 - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
