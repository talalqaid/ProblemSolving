#include <stdio.h>
int main(void) {
    int units;
    float bill;
    for (int i = 1; i <= 3; i++) {
        printf("Units for customer %d: ", i);
        scanf("%d", &units);
        if (units <= 100) bill = units * 0.20f;
        else bill = 100 * 0.20f + (units - 100) * 0.30f;
        printf("Bill: %.2f\n", bill);
    }
    return 0;
}
