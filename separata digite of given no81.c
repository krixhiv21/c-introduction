#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Separated digits: ");
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        printf("%d", digit);   // Print the digit
        num /= 10;             // Remove the last digit

        if (num != 0) {
            printf(",");       // Add comma if more digits remain
        }
    }

    printf("\n");
    return 0;
}
