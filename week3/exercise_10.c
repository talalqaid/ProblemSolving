#include <stdio.h>
int main(void) {
    int shape, calculation;
    double a, b;
    printf("Shape (1=Square, 2=Rectangle): ");
    if (scanf("%d", &shape) != 1) return 1;
    printf("Calculation (1=Area, 2=Perimeter): ");
    if (scanf("%d", &calculation) != 1) return 1;
    switch (shape) {
        case 1:
            printf("Side length: ");
            if (scanf("%lf", &a) != 1) return 1;
            if (a <= 0) { printf("Invalid length\n"); break; }
            switch (calculation) {
                case 1: printf("Area: %.2f\n", a * a); break;
                case 2: printf("Perimeter: %.2f\n", 4 * a); break;
                default: printf("Invalid calculation\n");
            }
            break;
        case 2:
            printf("Length and width: ");
            if (scanf("%lf %lf", &a, &b) != 2) return 1;
            if (a <= 0 || b <= 0) { printf("Invalid dimensions\n"); break; }
            switch (calculation) {
                case 1: printf("Area: %.2f\n", a * b); break;
                case 2: printf("Perimeter: %.2f\n", 2 * (a + b)); break;
                default: printf("Invalid calculation\n");
            }
            break;
        default: printf("Invalid shape\n");
    }
    return 0;
}
