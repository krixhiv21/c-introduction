#include <stdio.h>

int main() {
    int numbers[100];
    int largest, smallest;

    // Prompt user to enter 100 numbers
    printf("Enter 100 integers:\n");
    for (int i = 0; i < 100; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest with the first number
    largest = smallest = numbers[0];

    // Loop to find largest and smallest
    for (int i = 1; i < 100; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Display results
    printf("\nLargest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
