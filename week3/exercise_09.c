#include <stdio.h>
int main(void) {
    int choice, action;
    double balance = 100.0, amount;
    printf("Menu (1=Balance, 2=Transaction): ");
    if (scanf("%d", &choice) != 1) return 1;
    switch (choice) {
        case 1: printf("Balance: %.2f GBP\n", balance); break;
        case 2:
            printf("Action (1=Deposit, 2=Withdraw): ");
            if (scanf("%d", &action) != 1) return 1;
            switch (action) {
                case 1:
                    printf("Deposit amount: ");
                    if (scanf("%lf", &amount) != 1) return 1;
                    if (amount <= 0) printf("Amount must be positive\n");
                    else { balance += amount; printf("Balance: %.2f GBP\n", balance); }
                    break;
                case 2:
                    printf("Withdrawal amount: ");
                    if (scanf("%lf", &amount) != 1) return 1;
                    if (amount <= 0) printf("Amount must be positive\n");
                    else if (amount > balance) printf("Insufficient funds\n");
                    else { balance -= amount; printf("Balance: %.2f GBP\n", balance); }
                    break;
                default: printf("Invalid transaction\n");
            }
            break;
        default: printf("Invalid menu choice\n");
    }
    return 0;
}
