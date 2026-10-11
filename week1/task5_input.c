#include <stdio.h>

int main(void) {
    int maths, physics, programming;
    printf("Enter Mathematics mark: ");
    scanf("%d", &maths);
    printf("Enter Physics mark: ");
    scanf("%d", &physics);
    printf("Enter Programming mark: ");
    scanf("%d", &programming);
    double average = (maths + physics + programming) / 3.0;
    printf("Average: %.2f\n", average);
    return 0;
}
