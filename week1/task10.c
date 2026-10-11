#include <stdio.h>

int main(void) {
    double distance = 150.0, time = 2.5;
    double speed = distance / time;
    printf("Distance: %.2f km\nTime: %.2f hours\nAverage Speed: %.2f km/h\n", distance, time, speed);
    return 0;
}
