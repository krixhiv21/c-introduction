#include <stdio.h>

int main() {
    float length, area, perimeter;

    // Ask user for the length of the square
    printf("Enter the length of the side of the square (L): ");
    scanf("%f", &length);

    // Calculate area and perimeter
    area = length * length;
    perimeter = 4 * length;

    // Display results
    printf("\nArea of the square = %.2f\n", area);
    printf("Perimeter of the square = %.2f\n", perimeter);

    return 0;
}
