#include <stdio.h>

int main(void) {
    double basic, bonus, allowance;
    printf("Enter basic salary: ");
    scanf("%lf", &basic);
    printf("Enter bonus: ");
    scanf("%lf", &bonus);
    printf("Enter allowance: ");
    scanf("%lf", &allowance);
    double gross = basic + bonus + allowance;
    double tax = gross * 0.10;
    printf("Gross Salary: %.2f\nTax: %.2f\nNet Salary: %.2f\n", gross, tax, gross - tax);
    return 0;
}
