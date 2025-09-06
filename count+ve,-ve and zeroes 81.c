#include <stdio.h>

int main() {
    int numbers[200];
    int positive = 0, negative = 0, zero = 0;

    // Prompt user to enter 200 values
    printf("Enter 200 integers:\n");
    for (int i = 0; i < 200; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Count based on value
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    // Display results
    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}
