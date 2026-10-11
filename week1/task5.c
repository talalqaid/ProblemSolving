#include <stdio.h>

int main(void) {
    int maths = 80, physics = 75, programming = 90;
    double average = (maths + physics + programming) / 3.0;
    printf("Mathematics: %d\nPhysics: %d\nProgramming: %d\nAverage: %.2f\n", maths, physics, programming, average);
    return 0;
}
