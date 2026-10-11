#include <stdio.h>

int main(void) {
    double p1 = 12.50, p2 = 8.75, p3 = 15.00;
    double subtotal = p1 + p2 + p3;
    double discount = subtotal * 0.10;
    printf("Product 1: %.2lf\nProduct 2: %.2lf\nProduct 3: %.2lf\nSubtotal: %.2lf\nDiscount: %.2lf\nFinal Total: %.2lf\n", p1, p2, p3, subtotal, discount, subtotal - discount);
    return 0;
}
