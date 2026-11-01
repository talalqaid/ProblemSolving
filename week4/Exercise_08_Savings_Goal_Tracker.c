#include <stdio.h>
int main(void) {
    float savings = 0, amount;
    while (savings < 1000) {
        printf("Amount to save: ");
        scanf("%f", &amount);
        if (amount > 0) {
            savings += amount;
            printf("Total saved: %.2f\n", savings);
        } else printf("Invalid amount!\n");
    }
    printf("Congratulations! Target reached.\n");
    return 0;
}
