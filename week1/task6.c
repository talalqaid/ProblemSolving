#include <stdio.h>

int main(void) {
    double principal = 1000.0, rate = 5.0;
    int years = 3;
    double interest = principal * rate * years / 100.0;
    printf("Principal: %.2lf\nInterest Rate: %.2lf%%\nTime: %d years\nSimple Interest: %.2lf\nTotal Amount: %.2lf\n", principal, rate, years, interest, principal + interest);
    return 0;
}
