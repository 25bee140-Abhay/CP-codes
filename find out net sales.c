#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;

    // Input gross sales
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    // Calculate discount using if conditions
    if (gross_sales > 20000) {
        discount = 0.15 * gross_sales;
    }
    else if (gross_sales > 10000) {
        discount = 0.10 * gross_sales;
    }
    else {
        discount = 0.05 * gross_sales;
    }

    // Calculate net sales
    net_sales = gross_sales - discount;

    // Display result
    printf("Net Sales = %.2f\n", net_sales);

    return 0;
}
