Que 15) store 5 numbers in array and sort it in ascending order

#include <stdio.h>
int main() {
    int numbers[5];
    printf("Enter %d numbers:\n", 5);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
