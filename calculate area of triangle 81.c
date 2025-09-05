#include <stdio.h>

int main() {
    float height, base, area;

    // Input height and base
    printf("Enter the height of the triangle (H): ");
    scanf("%f", &height);

    printf("Enter the base of the triangle (L): ");
    scanf("%f", &base);

    // Calculate area
    area = (height * base) / 2;

    // Display result
    printf("\nArea of the triangle = %.2f\n", area);

    return 0;
}
