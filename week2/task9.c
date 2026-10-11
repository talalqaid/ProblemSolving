/* Week 2 - Exercise 9: Discount Calculator
   Ask the user to enter a purchase amount. Apply a 15% discount for purchases of £100 or more; otherwise apply a 5% discount. Display the discount and final amount to two decimal places. Assume the purchase amount is non-negative.
*/

#include <stdio.h>

int main(void) {
    double amount, discount, total;
    printf("Enter purchase amount: ");
    scanf("%lf", &amount);
    if (amount >= 100.0) {
        discount = amount * 0.15;
    } else {
        discount = amount * 0.05;
    }
    total = amount - discount;
    printf("Discount: %.2f\n", discount);
    printf("Final amount: %.2f\n", total);
    return 0;
}
