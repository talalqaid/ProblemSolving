#include <stdio.h>
int main(void) {
    int hours = 0;
    while (hours < 1 || hours > 24) {
        printf("Parking hours (1-24): ");
        scanf("%d", &hours);
        if (hours < 1 || hours > 24) printf("Invalid hours. Try again.\n");
    }
    printf("Parking fee: %d\n", hours * 2);
    return 0;
}
