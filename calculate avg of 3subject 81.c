#include <stdio.h>

int main() {
    float subject1, subject2, subject3;
    float total, average;

    // Input marks for three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    // Calculate total and average
    total = subject1 + subject2 + subject3;
    average = total / 3;

    // Display results
    printf("\nTotal Marks   = %.2f", total);
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
