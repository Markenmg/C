#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    // Basic tax brackets
    if (income <= 1000) {
        tax = 0;
    } else if (income <= 2000) {
        tax = (income - 1000) * 0.10;  // 10% on income over 1000
    } else if (income <= 30000) {
        tax = 1000 * 0.10 + (income - 2000) * 0.20;  // 10% on 1000 + 20% on amount over 2000
    } else {
        tax = 1000 * 0.10 + 28000 * 0.20 + (income - 30000) * 0.30;  // Add 30% on income over 30,000
    }

    printf("Your tax is: $%.2f\n", tax);

    return 0;
}
