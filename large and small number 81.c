#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare and display results
    if (num1 > num2) {
        printf("Largest: %d\n", num1);
        printf("Smallest: %d\n", num2);
    } else if (num2 > num1) {
        printf("Largest: %d\n", num2);
        printf("Smallest: %d\n", num1);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }

    return 0;
}
