#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    // Ask user for input
    printf("Enter how many even numbers you want: ");
    scanf("%d", &n);

    // Print first n even numbers
    while (count < n) {
        printf("%d\n", num);
        num += 2;     // Move to the next even number
        count++;
    }

    return 0;
}
