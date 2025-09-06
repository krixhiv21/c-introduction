#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Display result
        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
