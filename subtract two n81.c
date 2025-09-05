#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform subtraction
    difference = num1 - num2;

    // Display the result
    printf("The result of %d - %d is %d\n", num1, num2, difference);

    return 0;
}
