#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;

    // Input gross sales
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);

    // Calculate 10% discount
    discount = 0.10 * gross_sales;

    // Calculate net sales
    net_sales = gross_sales - discount;

    // Display results
    printf("\nDiscount (10%%) = %.2f", discount);
    printf("\nNet Sales      = %.2f\n", net_sales);

    return 0;
}
