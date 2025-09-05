#include <stdio.h>

int main() {
    float num1, num2, result;

    // Get input from the user
    printf("Enter the numerator: ");
    scanf("%f", &num1);

    printf("Enter the denominator: ");
    scanf("%f", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("The result of %.2f ÷ %.2f is %.2f\n", num1, num2, result);
    }

    return 0;
}
