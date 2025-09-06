#include <stdio.h>

int main() {
    int n, count = 0, num = 1;

    // Ask user for input
    printf("Enter how many odd numbers you want: ");
    scanf("%d", &n);

    // Print first n odd numbers
    while (count < n) {
        printf("%d\n", num);
        num += 2;     // Move to the next odd number
        count++;
    }

    return 0;
}
