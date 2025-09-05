#include <stdio.h>

int main() {
    float kilograms, grams;

    // Prompt the user to enter weight in kilograms
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    // Convert kilograms to grams
    grams = kilograms * 1000;

    // Display the result
    printf("%.2f kilograms is equal to %.2f grams.\n", kilograms, grams);

    return 0;
}
