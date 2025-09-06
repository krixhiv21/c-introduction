#include <stdio.h>

int main() {
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M for male, F for female):\n");

    for (int i = 1; i <= 50; i++) {
        printf("Student %d (M/F): ", i);
        scanf(" %c", &sex);  // Note the space before %c to consume any leftover newline

        // Convert to uppercase for consistency
        if (sex == 'm' || sex == 'M') {
            boys++;
        } else if (sex == 'f' || sex == 'F') {
            girls++;
        } else {
            printf("Invalid input for student %d. Please enter M or F.\n", i);
            i--; // Repeat this iteration
        }
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}
