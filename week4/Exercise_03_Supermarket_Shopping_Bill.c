#include <stdio.h>
int main(void) {
    float price, total = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }
    if (total > 100) {
        total *= 0.90f;
        printf("10%% discount applied!\n");
    }
    printf("Total bill: %.2f\n", total);
    return 0;
}
