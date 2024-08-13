12) Accept number of students from user. I need to give 5 apples to each
 student. How many apples are required?

Ans)

#include <stdio.h>
int main()
 {
    int numberofstudents;
    int applesperstudent = 5;
    int totalapples;
    printf("enter the number of students: ");
    scanf("%d", &numberofstudents);
    totalapples = numberofstudents * applesperstudent;
    printf("total number of apples required: %d\n", totalapples);
    return 0;
}

