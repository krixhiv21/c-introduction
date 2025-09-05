#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

    // Input gross sales
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);

    // Determine discount based on gross sales
    if (grossSales > 20000) {
        discount = grossSales * 0.15;  // 15% discount
    } else if (grossSales > 10000) {
        discount = grossSales * 0.10;  // 10% discount
    } else {
        discount = grossSales * 0.05;  // 5% discount
    }

    // Calculate net sales
    netSales = grossSales - discount;

    // Display results
    printf("\nGross Sales: %.2f", grossSales);
    printf("\nDiscount: %.2f", discount);
    printf("\nNet Sales: %.2f\n", netSales);

    return 0;
}
