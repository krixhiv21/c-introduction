#include <stdio.h>

int main() {
    int count = 0, number = 2;

    printf("First 10 even numbers:\n");

    while (count < 10) {
        printf("%d ", number);
        number += 2;  // Move to the next even number
        count++;
    }

    printf("\n");
    return 0;
}
