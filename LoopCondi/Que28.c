Que 28) 1 2 3 6 9 18 27 54

#include <stdio.h>

int main() {
    int n = 8;
    int sequence[] = {1, 2, 3, 6, 9, 18, 27, 54};
    printf("The sequence is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}
