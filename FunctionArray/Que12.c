Que 12) WAP to accept 5 students name and store it in array

#include <stdio.h>
int main() {
    char studentnames[5][50];
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s",&studentnames[i]); 
    }
    printf("\nStudent Names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, studentnames[i]);
    }
    return 0;
}
