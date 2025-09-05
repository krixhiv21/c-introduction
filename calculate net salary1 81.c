#include <stdio.h>

int main() {
    float gross_salary, allowance, deduction, net_salary;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    // Calculate allowance and deduction
    allowance = 0.10 * gross_salary;
    deduction = 0.03 * gross_salary;

    // Calculate net salary
    net_salary = gross_salary + allowance - deduction;

    // Display results
    printf("\nAllowance (10%%)  = %.2f", allowance);
    printf("\nDeduction (3%%)  = %.2f", deduction);
    printf("\nNet Salary       = %.2f\n", net_salary);

    return 0;
}
