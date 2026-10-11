#include <stdio.h>

int main(void) {
    int total;
    printf("Enter total seconds: ");
    scanf("%d", &total);
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, seconds);
    return 0;
}
