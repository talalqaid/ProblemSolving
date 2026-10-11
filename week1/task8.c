#include <stdio.h>

int main(void) {
    int total = 7385;
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;
    printf("Total Seconds: %d\nHours: %d\nMinutes: %d\nSeconds: %d\n", total, hours, minutes, seconds);
    return 0;
}
