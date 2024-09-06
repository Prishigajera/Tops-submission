Que 20) Accept monthly salary from the user and deduct 10% insurance premium,
    10% loan installment find out of remaining salary.

#include <stdio.h>
int main()
 {
    float salary, insuranceDeduction, loanDeduction, remainingSalary;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);
    insuranceDeduction = salary * 0.10;
    loanDeduction = salary * 0.10;
    remainingSalary = salary - insuranceDeduction - loanDeduction;
    printf("Insurance Deduction: %.2f\n", insuranceDeduction);
    printf("Loan Deduction: %.2f\n", loanDeduction);
    printf("Remaining Salary: %.2f\n", remainingSalary);
    return 0;
}
