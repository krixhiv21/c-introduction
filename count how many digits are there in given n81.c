#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle zero explicitly
    if (num == 0) {
        count = 1;
    } else {
        // Make sure negative numbers are handled
        if (num < 0) {
            num = -num;
        }

        while (num != 0) {
            num /= 10;   // Remove last digit
            count++;     // Increment digit count
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
