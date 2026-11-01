#include <stdio.h>
int main(void) {
    int pin = 0, attempts = 0;
    while (pin != 2468 && attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        attempts++;
        if (pin != 2468) printf("Incorrect PIN!\n");
    }
    if (pin == 2468) printf("Login successful!\n");
    else printf("Account locked!\n");
    return 0;
}
