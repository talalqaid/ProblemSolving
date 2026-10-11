#include <stdio.h>

int main(void) {
    double distance, time;
    printf("Enter distance in km: ");
    scanf("%lf", &distance);
    printf("Enter time in hours (greater than zero): ");
    scanf("%lf", &time);
    if (time <= 0) {
        printf("Time must be greater than zero.\n");
        return 1;
    }
    printf("Average Speed: %.2f km/h\n", distance / time);
    return 0;
}
