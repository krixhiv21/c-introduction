#include <stdio.h>

int main() {
    float grossSalary, allowance, deduction, netSalary;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);

    // Calculate allowance and deduction based on salary brackets
    if (grossSalary > 10000) {
        allowance = grossSalary * 0.10;   // 10% allowance
        deduction = grossSalary * 0.03;   // 3% deduction
    } else if (grossSalary > 5000) {
        allowance = grossSalary * 0.07;   // 7% allowance
        deduction = grossSalary * 0.02;   // 2% deduction
    } else {
        allowance = 0;
        deduction = 0;
    }

    // Calculate net salary
    netSalary = grossSalary + allowance - deduction;

    // Display results
    printf("\nGross Salary: %.2f", grossSalary);
    printf("\nAllowance: %.2f", allowance);
    printf("\nDeduction: %.2f", deduction);
    printf("\nNet Salary: %.2f\n", netSalary);

    return 0;
}
