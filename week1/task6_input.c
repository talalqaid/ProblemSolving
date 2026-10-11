#include <stdio.h>

int main(void) {
    double principal, rate;
    int years;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%d", &years);
    double interest = principal * rate * years / 100.0;
    printf("Simple Interest: %.2f\nTotal Amount: %.2f\n", interest, principal + interest);
    return 0;
}
