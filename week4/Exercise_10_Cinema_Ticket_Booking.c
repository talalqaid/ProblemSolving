#include <stdio.h>
int main(void) {
    int tickets = 20, requested = -1, totalSales = 0;
    while (requested != 0 && tickets > 0) {
        printf("Tickets available: %d\nHow many? (0 to exit): ", tickets);
        scanf("%d", &requested);
        if (requested > tickets) printf("Not enough tickets!\n");
        else if (requested < 0) printf("Invalid quantity!\n");
        else if (requested > 0) {
            tickets -= requested;
            totalSales += requested * 8;
            printf("Booking successful! Cost: %d\n", requested * 8);
        }
    }
    printf("Remaining tickets: %d\nTotal sales: %d\n", tickets, totalSales);
    return 0;
}
