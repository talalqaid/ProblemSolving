#include <stdio.h>
int main(void) {
    int category, item;
    printf("Category (1=Meals, 2=Drinks): ");
    scanf("%d", &category);
    printf("Item number (1 or 2): ");
    scanf("%d", &item);
    switch (category) {
        case 1:
            switch (item) {
                case 1: printf("Burger: 6.00 GBP\n"); break;
                case 2: printf("Pizza: 8.00 GBP\n"); break;
                default: printf("Invalid meal\n");
            }
            break;
        case 2:
            switch (item) {
                case 1: printf("Water: 1.00 GBP\n"); break;
                case 2: printf("Juice: 2.50 GBP\n"); break;
                default: printf("Invalid drink\n");
            }
            break;
        default: printf("Invalid category\n");
    }
    return 0;
}
