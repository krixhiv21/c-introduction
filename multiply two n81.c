#include <stdio.h>

int main() {
    int num1, num2, product;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Multiply the numbers
    product = num1 * num2;

    // Display the result
    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0;
}
