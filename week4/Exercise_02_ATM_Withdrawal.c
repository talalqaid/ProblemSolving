#include <stdio.h>
int main(void) {
    int balance = 500, amount = -1;
    while (amount != 0) {
        printf("Balance: %d\nWithdrawal (0 to exit): ", balance);
        scanf("%d", &amount);
        if (amount > balance) printf("Insufficient balance!\n");
        else if (amount < 0) printf("Invalid amount!\n");
        else if (amount > 0) {
            balance -= amount;
            printf("Withdrawal successful!\n");
        }
    }
    printf("Final balance: %d\n", balance);
    return 0;
}
