#include <stdio.h>

int main() {
    int n, sum = 0, num = 1;

    // Ask user for input
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (int i = 0; i < n; i++) {
        sum += num;
        num += 2;  // Move to next odd number
    }

    // Display the result
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}
