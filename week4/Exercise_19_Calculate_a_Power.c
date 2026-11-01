#include <stdio.h>
int main(void) {
    int base, exponent;
    long long result = 1;
    printf("Base: ");
    scanf("%d", &base);
    printf("Nonnegative exponent: ");
    scanf("%d", &exponent);
    if (exponent < 0) {
        printf("Invalid exponent!\n");
        return 1;
    }
    for (int i = 1; i <= exponent; i++) result *= base;
    printf("Result = %lld\n", result);
    return 0;
}
