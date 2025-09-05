#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Prompt user for input
    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter Time period in years (N): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display the result
    printf("\nSimple Interest (I) = %.2f\n", interest);

    return 0;
}
