#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.1416;

    // Ask user for radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display result
    printf("\nArea of the circle = %.2f\n", area);

    return 0;
}
