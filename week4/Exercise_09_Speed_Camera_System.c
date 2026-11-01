#include <stdio.h>
int main(void) {
    int speed, speeding = 0, highest = 0;
    for (int i = 1; i <= 6; i++) {
        printf("Speed of car %d: ", i);
        scanf("%d", &speed);
        if (speed > 60) speeding++;
        if (speed > highest) highest = speed;
    }
    printf("Cars speeding: %d\n", speeding);
    printf("Highest speed: %d mph\n", highest);
    return 0;
}
