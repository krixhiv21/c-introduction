#include <stdio.h>

int main() {
    int count = 0, number = 1;

    printf("First 10 odd numbers:\n");

    while (count < 10) {
        printf("%d ", number);
        number += 2;  // Move to the next odd number
        count++;
    }

    printf("\n");
    return 0;
}
