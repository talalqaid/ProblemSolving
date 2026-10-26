#include <stdio.h>
int main(void) {
    int group, direction;
    double value;
    printf("Group (1=Distance, 2=Mass): ");
    scanf("%d", &group);
    printf("Direction (1 or 2): ");
    scanf("%d", &direction);
    printf("Enter value: ");
    if (scanf("%lf", &value) != 1) return 1;
    switch (group) {
        case 1:
            switch (direction) {
                case 1: printf("%.2f km = %.2f m\n", value, value * 1000); break;
                case 2: printf("%.2f m = %.2f km\n", value, value / 1000); break;
                default: printf("Invalid distance direction\n");
            }
            break;
        case 2:
            switch (direction) {
                case 1: printf("%.2f kg = %.2f g\n", value, value * 1000); break;
                case 2: printf("%.2f g = %.2f kg\n", value, value / 1000); break;
                default: printf("Invalid mass direction\n");
            }
            break;
        default: printf("Invalid group\n");
    }
    return 0;
}
