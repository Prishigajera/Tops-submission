Que 21)Accept 2 numbers from user and swap 2 numbers with using 3rd variable
        and without using 3rd variable

include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("First number : %d\n", a);
    printf("Second number: %d\n", b);
    return 0;
}


