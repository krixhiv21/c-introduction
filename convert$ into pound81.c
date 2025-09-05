#include <stdio.h>

int main() {
    float dollars, rupees, pounds;
    const float dollarToRupee = 48.0;
    const float poundToRupee = 70.0;

    // Ask the user to enter amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * dollarToRupee;

    // Convert rupees to pounds
    pounds = rupees / poundToRupee;

    // Display the result
    printf("%.2f dollar(s) = %.2f rupee(s) = %.2f pound(s)\n", dollars, rupees, pounds);

    return 0;
}
