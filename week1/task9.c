#include <stdio.h>

int main(void) {
    double basic = 2000.0, bonus = 300.0, allowance = 150.0;
    double gross = basic + bonus + allowance;
    double tax = gross * 0.10;
    printf("Basic Salary: %.2f\nBonus: %.2f\nAllowance: %.2f\nGross Salary: %.2f\nTax: %.2f\nNet Salary: %.2f\n", basic, bonus, allowance, gross, tax, gross - tax);
    return 0;
}
