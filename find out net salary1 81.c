#include <stdio.h>

int main() {
    float grossSalary, allowance, deduction, netSalary;

    // Input values
    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Deduction: ");
    scanf("%f", &deduction);

    // Calculate Net Salary
    netSalary = grossSalary + allowance - deduction;

    // Display result
    printf("Net Salary = %.2f\n", netSalary);

    return 0;
}
