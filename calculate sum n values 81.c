#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *values, sum = 0.0, mean;

    // Ask user for number of values
    printf("Enter how many values you want to input: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n values
    values = (float *)malloc(n * sizeof(float));
    if (values == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values and calculate sum
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%f", &values[i]);
        sum += values[i];
    }

    // Calculate mean
    mean = sum / n;

    // Display results
    printf("\nSum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    // Free allocated memory
    free(values);

    return 0;
}
