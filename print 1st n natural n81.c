#include <stdio.h>

int main() {
    int n, i;

    // Ask user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print natural numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
