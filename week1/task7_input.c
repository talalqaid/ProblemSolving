#include <stdio.h>

int main(void) {
    double p1, p2, p3;
    printf("Enter price of product 1: ");
    scanf("%lf", &p1);
    printf("Enter price of product 2: ");
    scanf("%lf", &p2);
    printf("Enter price of product 3: ");
    scanf("%lf", &p3);
    double subtotal = p1 + p2 + p3;
    double discount = subtotal * 0.10;
    printf("Subtotal: %.2f\nDiscount: %.2f\nFinal Total: %.2f\n", subtotal, discount, subtotal - discount);
    return 0;
}
