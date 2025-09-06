#include <stdio.h>

int main() {
    int n, sum = 0, num = 2;

    // Ask user for input
    printf("Enter how many even numbers to sum: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n even numbers
    for (int i = 0; i < n; i++) {
        sum += num;
        num += 2;  // Move to next even number
    }

    // Display the result
    printf("Sum of first %d even numbers is: %d\n", n, sum);

    return 0;
}
