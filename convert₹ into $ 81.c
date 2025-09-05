#include <stdio.h>

int main() {
    float rupees, dollars;
    const float conversionRate = 48.0;

    // Ask the user to enter amount in rupees
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    // Convert rupees to dollars
    dollars = rupees / conversionRate;

    // Display the result
    printf("%.2f rupee(s) = %.2f dollar(s)\n", rupees, dollars);

    return 0;
}
