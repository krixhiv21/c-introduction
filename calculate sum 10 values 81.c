#include <stdio.h>

int main() {
    int values[10];
    int sum = 0;
    float mean;

    // Prompt user to enter 10 values
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
        sum += values[i];
    }

    // Calculate mean
    mean = sum / 10.0;

    // Display results
    printf("\nSum of the 10 values = %d\n", sum);
    printf("Mean of the 10 values = %.2f\n", mean);

    return 0;
}
